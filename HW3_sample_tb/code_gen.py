import requests
from bs4 import BeautifulSoup

def code_generator(assembly) -> list:
    # Make a GET request to the webpage
    url = 'https://people.cs.nctu.edu.tw/~cjtsai/mips.php'
    response = requests.get(url)

    # Parse the HTML content with BeautifulSoup
    soup = BeautifulSoup(response.text, 'html.parser')

    form_data = {
        'input': assembly
    }

    response = requests.post(url, data=form_data)
    soup = BeautifulSoup(response.content, 'html.parser')
    div = soup.find('div', {'class': 'code'})

    lines = div.text.splitlines()
    code = []
    for line in lines:
        code.append(line.split(':')[1].split(';')[0][1:-1])
    
    return code

if __name__ == '__main__':
    assembly = '''
    0: addi $t1, $t1, -24920
    1: sub $t1, $zero, $t0
    2: addi $t0, $t0, 7677
    3: sw $t1, 44($zero)
    4: sw $t1, 16($zero)
    5: sw $t1, 40($zero)
    6: sw $t0, 44($zero)
    7: lw $t1, 12($zero)
    8: sw $t0, 60($zero)
    9: sw $t0, 20($zero)
    10: and $t1, $t1, $t1
    11: addi $t1, $zero, 14
    12: sw $t1, 52($zero)
    13: j 13

    '''
    code_and_tag = code_generator(assembly)
    machine_code = []
    for code in code_and_tag:
        if len(code) == 8:
            machine_code.append(code)          
    if len(machine_code) & 1: # padding
        machine_code.append('00000000')
    print(f'machine code: {machine_code}')
    print(f'len: {len(machine_code)}')


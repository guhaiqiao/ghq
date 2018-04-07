str = list(input('请输入一串字符'))
alphabet = ('a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z')
number = ('1', '2', '3', '4', '5', '6', '7', '8', '9', '0')
space = (' ')
alphabet_num = 0
number_num = 0
space_num = 0
other_num = 0
for i,element in enumerate(str):
    if str[i] in alphabet:
        alphabet_num = alphabet_num + 1
    elif str[i] in number:
        number_num = number_num + 1
    elif str[i] in space:
        space_num = space_num + 1
    else:
        other_num = other_num + 1
print('字母个数为%d'%alphabet_num)
print('数字个数为%d'%number_num)
print('空格个数为%d'%space_num)
print('其他字符个数为%d'%other_num)
print('ubook ghq hw3_2')

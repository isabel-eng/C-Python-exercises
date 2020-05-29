#2. Given a list of strings delete all special chars in each one (non-alphanumeric chars).
strings = input("put strings: ")
#The following for goes through each character of the string and checks if it 
#is an alphanumeric value or a space otherwise it will replace it
for i in strings:
    if i.isalnum() or i == ' ':
        words = strings
    else:
        words = strings.replace(i,'')
print(words)
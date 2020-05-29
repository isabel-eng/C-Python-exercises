password = input("password: ")
size = len(password)
forbidden = ("?", "¿", "¡", "!", " ", ",", ".", ";", ":")
#Verify if the password is greater than 6 digits or less than 16
if size >= 6 and size <= 16:
    #These variables indicate that all requirements are met
    alph = 0
    num = 0
    bid = 0
    #At least 1 letter between [a-z] and 1 letter between [A-Z].
    for i in password:
        if i.isalpha() and not i.islower():
            alph = 1
            break
    #At least 1 number between [0-9].
    for i in password:
        if i.isdigit():
            num = 1
            break
    #At least 1 at least one punctuation sign with special character diccionary.
    for i in password:
        if i in forbidden:
            bid = 1
            break
    #all cases should be true
    if alph == 1 and bid == 1 and num == 1:
        print("Your password is OK")
        quit()
    else:
        print("Your password it's wrong")
        quit()
else:
    print("minum")
    quit()
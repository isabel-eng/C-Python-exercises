
#ask for a string
InitialS= str(input("enter your string: "))
  
# removal all values which are not numbers and alphabets using re 
v = list([val for val in InitialS 
               if val.isalpha() or val.isnumeric()]) 
  
FinalS = "".join(v) 
  
# print the new string
print ("Here is your new string: ", FinalS) 
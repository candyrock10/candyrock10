import re
txt="utkarsh loves anjali but she dont know"
x=re.search("^utkarsh.*know$",txt) #checks that any text is there that start from from utk and ends with knows
if x:
    print("yes")
else:
    print("no")
x=re.findall("[a-m]",txt) #prints all lowercase elements
print(x)
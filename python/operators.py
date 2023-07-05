import os
import os  # it's important to import os
f = open("operators2.py", "r")
print(f.read())  # this will read the file
print(f.read(3))  # this will resd the first 3 characters of the file
print(f.readline)  # this will read the line of the file
for x in f:  # this will print the whole file line by line using a for loop
    print(f)

# append(a)
f.close()
f = open("operators.txt", "a")
f.write("this sentence is going to overwrite ")  # using append
f.close

f = open("operators.txt", "r")
print(f.read())  # n this will read the appended file edited above

# overwrite(w)
f = open("operators.txt", "w")
f.write("this is the overwrted function")
f.close

f.open("operators.txt", "r")
print(f.read())  # this will read the overwrited function

# deleting a file
os.remove("operators.txt")  # use os.remove

# checking if the file is deleated using if else function
if os.path.exists("operators.txt"):
    os.remove("operators.txt")
else:
    print("file does not exist")

# deleting a folder

os.rmdir("python")  # this will delete the entire folder

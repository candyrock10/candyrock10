class abc:
    a1="amity"
    a2="gwalior"

def fun(self):
    print("university",self.a1)
    print("city",self.a2)

o1=abc()
print(o1.a1)
o1.fun()    
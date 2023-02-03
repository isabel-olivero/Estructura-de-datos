"""
Nombre:
Codigo:
Fecha:
"""

##Punto 1_______________________________________________________________________
"""
def verificarDiagonales(matriz):
    posicion1,posicion2,lista = 0,(len(matriz))- 1,0
    ans = True

    
    for i in range(len(matriz)):
        lista = matriz[i]
        print(lista[posicion1],lista[posicion2],'(', posicion1, posicion2, ')')
        if ans == True:
            print(posicion2)
            for j in range(len(lista)):
               
                if lista[posicion1]!= lista[posicion2]:
                    
                    ans = False
            
        posicion1 += 1
        posicion2 += -1
    return ans
mat = [[11, 23, 76, 34, 11],
       [14, 30, 92, 30, 101],
       [12, 45, 58, 92, 22],
       [74, 56, 49, 56, 100],
       [99, 5, 28, 47, 99]]

a = verificarDiagonales(mat)
print(a)
"""                
    
#Punto 2________________________________________________________________________
def esCapicua(lis):
    Posicion = 0
    ans = False
    lista =[]
    

    for j in reversed(range(len(lis))):
        posicion = lis[j]
        lista.append(posicion)
        posicion = 0
    if lista == lis:
            ans = True
    
            
    return ans
#punto 3_________________________________________________________________________

# A)----------------------------------------------------------------------------
def diferenciaListas(a,b):
    ans =[]
    for i in range(len(a)):
        if a[i] in b:
            b.remove(a[i])
        else:
            ans.append(a[i])
            
    return ans

# B)-----------------------------------------------------------------------------
def leerImprimir():
    lineas,lista,listas = [],[],[]
    casos = int(input())
    for i in range(casos):
        linea1 = input()
        lineas.append(linea1)
        linea2 = input()
        lineas.append(linea2)
    for j in range(len(lineas)):
        cad = lineas[j].split()
        for t in range(int(cad[0])):
            lista=[]
            for n in range(len(cad)):
                if n != 0:
                    numero = int(cad[n])
                    lista.append(numero)
            
        listas.append(lista)
        
#punto4___________________________________________________________________________________________
def mostrarPrimos(n):
    suma = 0
    for i in range(1,n):
        if (n % i) == 0:
            cadena = str(i)
            print('--> %d,' %i)
    print('Números entre 1 y %d con suma de dígitos con valor primo:' %n)
    for j in range(len(cadena)):
        numero = int(cadena[j])
        suma  += numero
        if (suma % j) == 0:
            print(j,end = ",")
a = mostrarPrimos(100)
print(a)

            
            


                

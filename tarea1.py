"""
Nombre:Laura Isabel Olivero Alvarez
Codigo: 8978537
Fecha:03/02/2023
"""

##Punto 1_______________________________________________________________________

def verificarDiagonales(matriz):
    posicion1,posicion2,lista = 0,(len(matriz))- 1,0
    ans = True

    
    for i in range(len(matriz)):
        lista = matriz[i]
        if ans == True:
            for j in range(len(lista)):
               
                if lista[posicion1]!= lista[posicion2]:
                    
                    ans = False
            
        posicion1 += 1
        posicion2 += -1
    return ans
    
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
    pos1, pos2 = 0,0
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
        for k in range(len(listas)):
            pos1 = k + 1
            pos2 = k + 2
            print((listas[pos1],listas[pos2]))
            ans = diferenciaListas(listas[pos1],listas[pos2])
            
    print(ans)



        
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
        for m in range(1,n):
            if (suma % m) == 0:
                print(m,end = ",")
a = mostrarPrimos(100)
print(a)

#Punto5____________________________________________________________________________________________
def sumarValoresMatriz(dic,lista):
    posiciones = 0
    suma = 0
    valores = 0

    for i in range(len(lista)):
        posiciones = lista[i]
        llave = dic[posiciones[0]]
        valores = llave[i][1]
        suma += valores
        
    return suma


        
        
        
        
            
            


                

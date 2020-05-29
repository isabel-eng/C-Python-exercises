'''
5. Compute the Matrix Multiplication between a matrix A and B. Don’t use any
library.
'''
#this function print the matrix
def printer(matrix, y):
    for i in range(0, y):
        print(matrix[i])
#this function ask the values of each place in the matrix
def askMatrix(x, y):
    matrix = []
    for i in range(0,x):
        matrix.append([])
        for j in range(0,y):
            leyend = "[" + str(i+1) + "]" + "[" + str(j+1) + "]:"#place
            matrix[i].append(int(input(leyend)))#input value
    return matrix
yA = 0
xB = 1
#if the number of columns in matrix A is different than rows in B this operation could be failed
while (yA != xB):
    #ask the size of the matrix A and B
    xA = int(input("how many rows for A matrix: "))
    yA = int(input("how many columns for A matrix: "))
    xB = int(input("how many rows for B matrix: "))
    yB = int(input("how many columns for B matrix: "))
    if (yA != xB):
        print("Your number of columns in matrix A is different than number of rows in matrix B")
matrixC = []
#MATRIX A DATA
print("data of matrix A")
matrixA = askMatrix(xA, yA)
printer(matrixA, yA)
#MATRIX B DATA
print("data of matrix B")
matrixB = askMatrix(xB, yB)
printer(matrixB, yB)
#MATRIX MULTIPLICATION
print("matrix multiplication is equal to: ")
for i in range(0, xA):
    matrixC.append([])
    for j in range(0, yB):
        matrixC[i].append(0)
        #matrix multiplication algorithm
        for k in range(0, xA):
            matrixC[i][j] = matrixC[i][j] + (matrixA[i][k] * matrixB[k][j])
printer(matrixC, xA)

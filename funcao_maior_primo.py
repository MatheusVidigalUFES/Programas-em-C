def ehPrimo_positivo(n):
    if n<=1:
        return False
    for i in range(2,n//2+1):
        if n==2 or n==3:
            break
        elif n%i!=0:
            continue
        else:
            return False
    return True     

def maior_fator_num(num):
    if ehPrimo_positivo(num) ==True:
        return num
    lista_divisor_num = [] # lista dos primos que dividem num
    for i in range(num//2+1):
        if ehPrimo_positivo(i)==True:
            if num%i==0:
                lista_divisor_num.append(i)
    return max(lista_divisor_num)

num = int(input("Digite um número: "))
print(maior_fator_num(num))

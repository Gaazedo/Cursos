#Definindo as variaveis e as condições
#para começar a aproximar usamos o 0 e o n° que queremos a raiz ("N")
n = 2 #raiz que quero encontrar
Li = 0; #limite inferior
Ls = n; #limite superior
Pmedio = Ls/2; #ponto médio
H = Pmedio; #hipotenusa
funH = H*H - n; #f(h) 
condicao = "f(h) é < 0"
decisao = "Li é igual ao Pm"
iteracao =  0

#verificação para o ponto médio
while True:
  if funH < 0:
    Li = Pmedio
    condicao = "f(h) é < 0"
    decisao = "Li é igual ao Pm"
  else:
    Ls = Pmedio
    condicao = "f(h) é > 0"
    decisao = "Ls é igual ao Pm"
   
   #calculo da média 
  Pmedio = (Ls + Li) / 2
  H = Pmedio
  iteracao +=1

  funH = H*H - n
   # repetir até que o valor de erro seja o desejado
  if (Ls - Li) > 1e-08: 
    print("\nValor aproximado da raíz de :",n,"é de: ",H,"na iteração:",iteracao) 
    


  

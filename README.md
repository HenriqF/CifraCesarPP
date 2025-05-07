<h2>Cifra Cesar Extra</h2>
Uma pequena modificacao que eu fiz no algoritmo da cifra cesar.
<h2></h2>
Na versão normal, cada letra de uma mensagem é deslocada de acordo com uma chave.
<br>
A unica coisa que eu alterei, é que agora um "gradiente de chave" é criado, dificultando um pouco mais decifrar a mensagem:

<br><br>
Normal: ABC, chave 1 -> BCD
<br><br>
Minha versão: ABCDEFG, chave 3 -> DDDDHHH

    A = 1 | 1 + 3 = D
    B = 2 | 2 + 2 = D
    C = 3 | 3 + 1 = D
    D = 4 | 4 + 0 = D
    E = 5 | 5 + 3 = H
    F = 6 | 6 + 2 = H
    G = 7 | 7 + 1 = H
  
Para reverter um texto, basta usar a chave negativa. (se a chave for 3, a chave negativa é -3 (quem diria))

# buffer_overflow-


 ```
[root@0xmachine scripts]# gcc  buff-basic-n_acessa.c -o buffer

[root@0xmachine scripts]# ./buffer
buffer           buffer-overflow
[root@oxmachine scripts]# ./buffer 123000001
Acesso Negado
[root@0xmachine scripts]# ./buffer 1230000018
Acesso Negado
[root@0xmachine scripts]# ./buffer 12300000189
Acesso Negado
[root@0xmachine scripts]# ./buffer 12300000189XxxGzz
Você conseguiu acessar
[root@0xmachine scripts]# ./buffer 12300000189XxxGzzx0Xx0xX000XxxxXX
Você conseguiu acessar
Segmentation fault
 ```
 

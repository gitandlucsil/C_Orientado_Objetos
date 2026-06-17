# Classes

Uma forma de representar um classe na linguagem C é utilizando struct. Com uma struct podemos agrupar dados que façam sentido para
um determinado contexto.

Outra limitaçao da linguagem C é que em classes podemos chamar os métodos através do objeto instanciado, porém a linguagem C nao 
permite chamar métodos através de instancias de forma direta, associando o objeto com o seu metodo, também nao temos namespace em C, para 
associar seus metodos atraves de um prefixo com nome de classe. Uma struct em C apenas pode guardar dados, além que em C as funcoes estao
isoladas das estruturas de dados

---Show example cycle1

Essa é a abordagem de programaçao defensiva, que testa todos os retornos para garantir o fluxo de execucao do codigo. Neste caso, temos um mecanismo para garantir que o objeto esta valido e pronto para uso, esta garantia é obtida atraves do retorno da funcao, send oque se o retorno for verdadeiro, a instancia foi devidamente inicializada.

Porém, no Javascript fazemos uso do # private que nao permite que outras classes acessem os atributos além do contexto que elas existem, fazendo a necessidade de metodos de acesso. Para ter esse mesmo comportamento em C, precisaremos modularizar o codigo separando a classe do seu uso.

---Show example cycle2

Nessa segunda abordagem, o contexto de acesso direto é protegido, forcando o uso de funcoes para manipular o contexto interno. 

# Encapsulamento

Permite esconder detalhes internos e além disso protege os dados de acesso direto.
--Show example cycle1 how the approach is weak related encapsulamento
--Show example cycle2 falhando ao tentar acessar os atributos privados
--Show example cycle2 acessando os metodos e conseguindo pegar o id e o etr

Assim, a abordagem orientada a erros temos a fragilidade dos atributos, com os usuários podendo alterar os atributos de forma direta. Na abordagem opaca, o acesso a atributos de forma direta são restringidos, o que acaba protegendo e fazendo que a regras sejam sempre aplicadas.

Porem, o acesso aos metodos nao é feito a partir do objeto como em uma linguagem orientada a objetos.
Pontos positivos:
- Quem consome a biblioteca nao consegue alterar o valor de etr sem passar pela função set etr;
- Abstração, se voce decidir mudar algum atributo dentro da struct, somente altera o arquivo .c;
- Impede que a estrutura de dados seja corrompida com valores invaĺidos sendo atribuidos diretamente para os membros. Proteçao e validação podem ser adicionadas, por exemplo;

# Herança
Permite que uma classe pode herdar caracteristicas de uma outra classe e faça o reaproveitamento do codigo dessa classe,

-- Show javascript example. Mostrar getId e getEtr sao usados mesmo que a classe filha nao tenha implementado elas
-- Show specialCycle example;
-- Show memory address for specialCycle; O endereço de memoria de specialCycle é o mesmo de cycle.id por causa do alinhamento de memoria do C.

Porém a limitação que temos em C é nao podermos fazer uso do recurso de override que permite que classes filhas sobrescrevam a comportamento da classe pai, por isso precisamos sempre criar as 
funcoes com os prefixos.

# Polimorfismo

Permite que classes filhas herdem um metodo da classe pai porém
forneçam sua propria implementação expecifica.

-- Show javascript example
-- Show cycle example, start cycle.h com ponteiro de função.
O void* é uma variável que pode ser considerado genérica e o que importa nela é o endereço de memoria;
O void *object é a maneira de em C de levar o contexto utilizado no escopo da função que a nossa "interface" prove. ELe carrega a referencia (endereço de memoria) do contexto para dentro do escopo
das funções;

Já o (*run) define que a nossa função será do tipo ponteiro de função;

A instrução do cycle_control:
cycle->run(cycle->object) chama as funções atráves de instancias, passando o ponteiro de função void *object como parametro.

O cycle_t é a sua interface. Ela não sabe o que é um special_cycle_t ou um favorite_cycle_t; ela só sabe que existem funções (run, pause, cancel) que aceitam um void *.

void *object: Este é o "salvamento de contexto". Ele é um ponteiro genérico que aponta para a estrutura específica que "contém" aquela instância de cycle_t.

Em specialcycle.h e favoritecycle.h, você faz a composição:
Como o cycle é o primeiro elemento da struct, o endereço de memória de special_cycle_t é o mesmo endereço do seu membro cycle.

O salvamento ocorre na função init (em specialcycle.c ou favoritecycle.c):

Aqui, você está dizendo para a interface: "Ei, quando você precisar executar uma função, use este ponteiro object para saber quem é você de verdade".

4. O Fluxo de Execução
Quando você chama cycle_control_execute(cycle_t *cycle):

A função chama cycle->run(cycle->object);.

Como o cycle->object foi configurado anteriormente para apontar para a struct pai (special_cycle_t), o ponteiro passa esse endereço para a função special_run.

Dentro de special_run, você faz o cast (conversão):

special_cycle_t *cycle = (special_cycle_t *)object;
Isso diz ao compilador: "Eu sei que esse void * na verdade é um special_cycle_t". Agora, você tem acesso ao id e a todos os membros específicos daquela estrutura.

Encapsulamento: O cycle_control não precisa conhecer os detalhes internos dos tipos de ciclo. Ele apenas "chama o que está na interface".

Reutilização: Você pode criar 10 tipos de ciclos diferentes, e o cycle_control funcionará com todos eles sem precisar de um único if ou switch.
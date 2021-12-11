#include    <stdio.h>
#include    <stdlib.h>
#include    <string.h>
#include    <windows.h>

#define ANSI_COLOR_GREEN      "\e[0;32m"
#define ANSI_COLOR_RESET      "\x1b[0m"

struct Dados_produto
{

    char nome[50];
    float preco;

};

struct Clientela
{

    char nome[70], tel[50];

};

float preco[100000], lucro;

int qtd_cads;

void start();
void login();
void qtd_reg();
void cadastro_login();
void add_prod();
void ver_dados();
int vender();
void compra(float precu);
void clientes();
void novo_cliente();
int main_menu();
void lucro_diario();
void sup();

int t, sair, flag, x;

int main()
{
    keybd_event(VK_MENU,0x36,0,0);
    keybd_event(VK_RETURN,0x1C,0,0);
    keybd_event(VK_RETURN,0x1C,KEYEVENTF_KEYUP,0);
    keybd_event(VK_MENU,0x38,KEYEVENTF_KEYUP,0);
    start();

    do
    {
        sair = 0;
        flag = 0;
        x = 0;
        flag = main_menu();
    }
    while(flag == 0);
}

int main_menu()
{

    do
    {
        flag = 0;
        system("cls");
        if(x == 0)
        {
            printf("ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿\n³Adicionar um novo produto³\nÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ\n  Ver produtos e precos\n     Venda de produto\n     Lucro aculmulado\n         Clientes\n     Entre em contato\n          Sair\n");
        }
        else if(x == 1)
        {
            printf("Adicionar um novo produto\nÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿\n³  Ver produtos e precos  ³\nÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ\n     Venda de produto\n     Lucro aculmulado\n         Clientes\n     Entre em contato\n          Sair\n");
        }
        else if(x == 2)
        {
            printf("Adicionar um novo produto\n  Ver produtos e precos\nÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿\n³     Venda de produto    ³\nÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ\n     Lucro aculmulado\n         Clientes\n     Entre em contato\n          Sair\n");
        }
        else if (x == 3)
        {
            printf("Adicionar um novo produto\n  Ver produtos e precos\n     Venda de produto    \nÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿\n³     Lucro aculmulado    ³\nÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ\n         Clientes\n     Entre em contato\n          Sair\n");
        }
        else if (x == 4)
        {
            printf("Adicionar um novo produto\n  Ver produtos e precos\n     Venda de produto\n     Lucro aculmulado\nÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿\n³         Clientes        ³\nÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ\n     Entre em contato\n          Sair\n");
        }
        else if (x == 5)
        {
            printf("Adicionar um novo produto\n  Ver produtos e precos\n     Venda de produto\n     Lucro aculmulado\n         Clientes\nÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿\n³     Entre em contato    ³\nÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ\n          Sair\n");
        }
        else if (x == 6)
        {
            printf("Adicionar um novo produto\n  Ver produtos e precos\n     Venda de produto\n     Lucro aculmulado\n         Clientes\n     Entre em contato\nÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿\n³          Sair           ³\nÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ\n");
        }

        t = getch();

        if(t == 13)
        {
            if(x == 0)
            {
                system("cls");
                add_prod();
            }
            else if(x == 1)
            {
                system("cls");
                ver_dados();
            }
            else if (x == 2)
            {
                system("cls");
                vender();
            }
            else if (x == 3)
            {
                system("cls");
                lucro_diario();
            }
            else if (x == 4)
            {
                system("cls");
                clientes();
            }
            else if (x == 5)
            {
                system("cls");
                sup();
            }
            else if (x == 6)
            {
                system("cls");
                printf("Fechando Programa...\n\n\n");
                flag = 1;
                exit(0);

            }

        }

        if(t == 80)
        {
            x++;

        }
        else if(t == 72)
        {
            x--;
        }
        if(x > 6)
        {
            x = 0;
        }
        if(x < 0)
        {
            x = 6;
        }

    }
    while(flag == 0);


    return 1;
}

void add_prod()
{

    int i;

    FILE *produto;
    produto = fopen("produtos.txt", "a");

    FILE *valor;
    valor = fopen("valor.txt", "a");

    struct Dados_produto d;

    int tam;

    system("cls");

    printf("Quantos produtos deseja adicionar?: ");
    scanf("%d", &tam);

    system("cls");

    for(i=0; i<tam; i++)
    {
        getchar();
        printf("Digite o nome do produto: ");
        scanf("%[^\n]s", d.nome);
        getchar();
        printf("\nDigite o valor do produto: ");
        scanf("%f", &d.preco);

        fprintf(produto, "%s | R$%.2f\n", d.nome, d.preco);
        fprintf(valor, "%.2f;\n", d.preco);
    }
    system("cls");

    fclose(produto);
    fclose(valor);
}

void ver_dados()
{

    FILE *produto;
    produto = fopen("produtos.txt", "r");

    char frase[100000];

    while(fgets(frase, 100000, produto) != NULL)
    {
        printf("%s", frase);
    }
    printf("\n\n");
    system("pause");

    system("cls");

    fclose(produto);
}

int vender()
{
    FILE *produto;
    produto = fopen("produtos.txt", "r");

    FILE *valor;
    valor = fopen("valor.txt", "r");

    char frase[100000], escolha = 's';
    int x = 0, y = 0;
    float preco_compra = 0, venda[100000], troco;

    while(fgets(frase, 100000, produto) != NULL)
    {
        printf("%d | %s", x ,frase);
        x++;
    }

    x = 0;

    if(valor == NULL)
        printf("Erro, nao foi possivel abrir o arquivo\n");
    else
        while( (fscanf(valor,"%f;\n", &venda[x]))!=EOF )
        {
            x++;
        }

    printf("\n\n");

    do
    {
        printf("Digite a linha do produto: ");
        scanf("%d", &x);
        preco_compra = preco_compra + venda[x];
        do
        {
            getchar();
            printf("\nDeseja adicionar outro produto? [ S / N ]\n");
            scanf("%s", &escolha);
        }
        while ((escolha != 's') && (escolha != 'S') && (escolha != 'n') && (escolha != 'N'));
        y++;
    }
    while (escolha == 's' || escolha == 'S');

    compra(preco_compra);

    printf("\n\n");
    system("pause");
    system("cls");

    return 0;
}

void compra(float precu)
{
    float troco;
    printf(ANSI_COLOR_GREEN "\nPreco total da compra: R$ %.2f\n" ANSI_COLOR_RESET, precu);
    printf("Valor pago pelo cliente: ");
    scanf("%f", &troco);
    troco = troco - precu;
    printf(ANSI_COLOR_GREEN "Troco: R$ %.2f" ANSI_COLOR_RESET, troco);

    lucro = lucro + precu;
}

void lucro_diario()
{
    printf(ANSI_COLOR_GREEN "O lucro acumulado ate o momento foi: R$%.2f\n\n\n" ANSI_COLOR_RESET, lucro);
    system("pause");
}

void login()
{

    qtd_reg();

    char usuario[qtd_cads][30], senha[qtd_cads][30];
    char log[30], passw[30], confirmacao, c;
    int lg=0, sn = 0, i = 0, x = 0;

    FILE *logar;
    logar = fopen("login.txt", "r");

    if(logar==NULL)
    {
        puts("Erro na abertura do arquivo");
        exit(0);
    }
    else
    {

        do
        {
            if(i==0)
            {
                fscanf(logar, "%s %s", usuario[0], senha[0]);
                i++;
            }
            if(i>0)
            {
                fscanf(logar, "\n%s %s", usuario[i], senha[i]);
                i++;
            }
        }
        while(i<qtd_cads);

        fclose(logar);
        printf("Login: ");
        scanf("%s", log);

        printf("Senha: ");
        scanf("%s", passw);

        i=0;

        do
        {
            if((strcmp(usuario[i], log)==0) && (strcmp(senha[i], passw)==0))
            {
                confirmacao=1;
                i=qtd_cads;

            }
            else
            {
                confirmacao=0;
                i++;
            }
        }
        while(i<qtd_cads);

        if(confirmacao==1)
        {
            system("cls");
            printf("\nBem-Vindo %s!\n\n\n", log);
            Sleep(1500);
            main_menu();
        }
        if(confirmacao==0)
        {
            system("cls");
            printf("\nSeu login ou senha estao errados!\n");
            Sleep(1000);
        }
    }
}

void qtd_reg()
{

    qtd_cads=0;
    char cont[10000];
    int  i=0;

    FILE *logar;
    logar = fopen("login.txt", "r");

    if(logar==NULL)
    {
        puts("Erro na abertura do arquivo");
        system("pause");
        exit(0);
    }
    else
    {
        fscanf(logar, " %[^NULL]s ", cont);
        fclose(logar);
        do
        {
            if(cont[i]== '\n')
            {
                qtd_cads++;
            }
            i++;
        }
        while(cont[i]!= '\0');
    }
}

void cadastro_login()
{

    FILE *login;
    login = fopen("login.txt", "a");

    char usuario[31], passw[31];

    printf("Login e senha devem conter no maximo 30 caracteres e nao podem ter acentuacao ou espacos\n\n");
    printf("Login: ");
    scanf("%s", usuario);
    printf("Senha: ");
    scanf("%s", passw);

    fprintf(login, "%s %s\n", usuario, passw);
    fclose(login);
}

void clientes()
{
    FILE *dados_cliente;
    dados_cliente = fopen("dados clientes.txt", "r");

    char frase[100000], escolha;

    while(fgets(frase, 100000, dados_cliente) != NULL)
    {
        printf("%s", frase);
    }
    do
    {
        printf("\nDeseja cadastrar um novo cliente? [ S / N ]\n");
        scanf("%s", &escolha);
        getchar();
    }
    while ((escolha != 's') && (escolha != 'S') && (escolha != 'n') && (escolha != 'N'));
    if (escolha == 's' || escolha == 'S')
    {
        novo_cliente();
    }
}

void novo_cliente()
{
    FILE *dados_cliente;
    dados_cliente = fopen("dados clientes.txt", "a");

    struct Clientela c;

    printf("Digite o nome do novo cliente: ");
    scanf("%[^\n]s", c.nome);
    getchar();
    printf("Digite o telefone do novo cliente: ");
    scanf("%[^\n]s", c.tel);
    getchar();

    fprintf(dados_cliente, "Nome: %s\nTelefone: %s\n\n", c.nome, c.tel);

    fclose(dados_cliente);

}

void start()
{
    do
    {
        flag = 0;
        system("cls");
        if(x == 0)
        {
            printf("ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿\n³          Login          ³\nÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ\n        Cadastrar\n          Sair\n");
        }
        else if(x == 1)
        {
            printf("          Login\nÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿\n³        Cadastrar        ³\nÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ\n          Sair\n");
        }
        else if(x == 2)
        {
            printf("          Login\n        Cadastrar\nÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿\n³           Sair          ³\nÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ\n");
        }
        t = getch();

        if(t == 13)
        {
            if(x == 0)
            {
                system("cls");
                login();
            }
            else if(x == 1)
            {
                system("cls");
                cadastro_login();
            }
            else if (x == 2)
            {
                system("cls");
                printf("Encerrando programa...\n\n\n");
                exit(0);
            }

        }

        if(t == 80)
        {
            x++;

        }
        else if(t == 72)
        {
            x--;
        }
        if(x > 2)
        {
            x = 0;
        }
        if(x < 0)
        {
            x = 2;
        }

    }
    while(flag == 0);
}

void sup()
{
    printf("Para relatar algum erro entre em contato:\n\n");
    printf("Bruno Bossois Hohmann:  (28) 99962-2132\n");
    printf("                        gnobr1@gmail.com\n\n");
    printf("Mateus Venturin Lozorio:  (28) 99901-3901\n");
    printf("                          mateuslozorio@gmail.com\n\n\n");
    system("pause");
}

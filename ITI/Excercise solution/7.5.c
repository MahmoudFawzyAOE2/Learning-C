#include <stdio.h>
typedef struct
    {
        char account_no[5];
        char name [10];
        int balance;
    } customer;

customer get_customer ();
void print_customer (customer_n);
void cname_less_balance (customer customers_array[], unsigned int number_of_customers);
void customer_add_balance (customer customers_array[], unsigned int number_of_customers);

void main(void)
{
    unsigned int number_of_customers;
    customer customers_array[100];

    printf("\nEnter number of customers: ");
    scanf("%d",&number_of_customers);

    int i;
    for (i=0;i<number_of_customers;i++)
    {
        printf("\n***** Enter Data for customer [%d] ***** ",i+1);
        customers_array[i] = get_customer();
    }

    cname_less_balance (customers_array, number_of_customers);
    customer_add_balance (customers_array, number_of_customers);
}

customer get_customer ()
{
    customer temp_customer;
    printf("\n***************************************");
    fflush(stdin);
    printf("\nEnter customer account number: ");
    gets(temp_customer.account_no);

    printf("Enter customer name: " );
    scanf("%s",&temp_customer.name);
    fflush(stdin);

    printf("Enter customer balance: ");
    scanf("%d",&temp_customer.balance);

    return temp_customer;
}

void print_customer (customer customer_n)
{
    printf("\n**************************");
    printf("\ncustomer account no: [%s]",customer_n.account_no);
    printf("\ncustomer Name: %s",customer_n.name);
    printf("\ncustomer balance: %d\n",customer_n.balance);
}

void cname_less_balance (customer customers_array[], unsigned int number_of_customers)
{
    int balance = 200 ,i;

    printf("\n*** Customers with balance below %d ***", balance);
    printf("\n *************************************");

    for (i=0;i<number_of_customers;i++)
    {
        if (customers_array[i].balance < balance)
            printf("\ncustomer Name: %s",customers_array[i].name);
    }
    printf("\n");
}

void customer_add_balance (customer customers_array[], unsigned int number_of_customers)
{
    int i;

    printf("\n*** adding balance customers who has a account no ***");
    printf("\n*****************************************************");

    for (i=0;i<number_of_customers;i++)
    {
        if (customers_array[i].balance > 1000)
        {
            customers_array[i].balance += 100;
            printf("\nCustomer %s balance increased to %d", customers_array[i].account_no , customers_array[i].balance);
        }
    }
    printf("\n");
}

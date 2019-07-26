#include "3-calc.h"

/**
 * main - Entry point
 * @argv: Arg vector
 * @argc: Arg count
 *
 * Return: Error exit 98, 99, 100 or the operational result if success
 */
int main(int argc, char *argv[])
{
        int a;
        int b;
        int (*op)(int a, int b);

        if (argc != 4)
        {
                printf("Error\n");
                exit(98);
        }
        if (argv[2][1] != '\0')
        {
                printf("Error\n");
                exit(99);
        }

        op = get_op_func(argv[2]);

        if (op == NULL)
        {
                printf("Error\n");
                exit(99);
        }

        a = atoi(argv[1]);
        b = atoi(argv[3]);

        printf("%d\n", op(a, b));
        return (0);
}

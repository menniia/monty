#include "monty.h"

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        fprintf(stderr, "Usage: monty file\n");
        exit(EXIT_FAILURE);
    }

    stack_t *stack = NULL;
    monty_run(argv[1], &stack);

    return 0;
}


typedef struct stack
{
    int *value;
    int head;
} stack;

void put(stack stack, int value) {
    stack.value[stack.head++] = value;
}

int main(void)
{
    return 0;
}
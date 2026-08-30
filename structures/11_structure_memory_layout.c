#include <stdio.h>
#include <stddef.h>

struct Packet
{
    char type;
    int length;
    short id;
};

int main()
{
    struct Packet packet;

    printf("Structure size = %zu\n", sizeof(packet));
    printf("type offset = %zu\n", offsetof(struct Packet, type));
    printf("length offset = %zu\n", offsetof(struct Packet, length));
    printf("id offset = %zu\n", offsetof(struct Packet, id));

    return 0;
}

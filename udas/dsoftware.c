#include <stdio.h>
 
int main() {
    if (remove("udas/client.rb", "udas/server.rb") == 0) {
        printf("Software deleted.");
    } else {
        printf("Software could not have been deleted!");
    }
    return 0;
}

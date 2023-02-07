#include <stdio.h>
 
int main() {
    if (remove("udas/client.rb", "udas/server.rb", "LICENSE", "README.md", "CODE_OF_CONDUCT.md", ".gitignore", "udas/database.sql", "udas/test", "SECURITY.md") == 0) {
        printf("Software deleted.");
    } else {
        printf("Software could not have been deleted!");
    }
    return 0;
}

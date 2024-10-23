 /*Try these code exercises on your own:
1. Repair the use-after-free defect from Listing 6-4.
2. Perform additional testing of the program from Listing 6-11 by using
dmalloc. Try varying inputs to the program to identify other memory
management defects
page 118
*/

/*#include <dirent.h>
#include <stdlib.h>
#include <unistd.h>

struct myDIR {
    int d_fd;
    char *d_buf= NULL;

};
int closedir(struct myDIR *dirp) {

    if (dirp->d_buf != NULL) {
        free(dirp->d_buf);
    }
    int result = close(dirp->d_fd);
    free(dirp);
    return result;
}*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#ifdef DMALLOC
#include "dmalloc.h"
#endif
void usage(char *msg) {
    fprintf(stderr, "%s", msg);
}
int main(int argc, char *argv[]) {
    printf("hello");
    if (argc != 3 && argc != 4) {
        /* the error message won't be more than 80 chars */
        char *errmsg = (char *)malloc(80);
        sprintf(
        errmsg,
       "Sorry %s,\nUsage: caesar secret_file keys_file [output_file]\n",
        getenv("USER")
        );
        usage(errmsg);
        free(errmsg);
        exit(EXIT_FAILURE);
        }
    //---snip--
    exit(EXIT_SUCCESS);
}
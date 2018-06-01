#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tree.h"
#include "file_utils.h"
#include "main.h"


int main(int argc, char *argv[]) {
    
    printf("Task 3. Load dictionary data\n\n");

    printf("Loading file info...\n");
    WordInfo info_list[MAX_LINES];
    int info_size = read_info_file(INFO_FILE_PATH, info_list);
    printf("File info loaded!\n");

    Tree t;
    init_tree(&t);
    
    int i;
    for(i=0; i<info_size; i++) {
        
        insert_into_tree(&t, info_list[i]);
    }
    printf("Dictionary loaded!\n");
    
    printf("\nTask 4. Search from query list\n\n");
    char* query_list[MAX_LINES];
    int query_size = read_query_file(QUERY_FILE_PATH, query_list);
    
    int j;
    for(j=0; j<query_size; j++) {
       
        WordInfo* wi = find_in_tree(&t, query_list[j]);
        if (wi == NULL) {
            printf("XX %s (Not found!)\n", query_list[j]);
        } else {
            print_word_info(*wi);
        }
    }

    printf("\nTask 5. Print sorted dictionary data\n\n");
    print_tree(&t);
    
    printf("\nPrint size of the vocabulary: %d\n\n", size_tree(&t));
    
    printf("\nCleaning memory...\n\n");
    clear_tree(&t);
    
    printf("\nDone!\n");

    return 0;
}

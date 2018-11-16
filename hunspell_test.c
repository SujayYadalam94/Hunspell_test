/*
	Written from scratch. Examples for C++ available, but none for C.
*/

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <hunspell.h>

int main(int argc, char* argv[])
{
	Hunhandle *dic;
	char *word_ok, *word_notok, **slist;
    int list_size, i;
     
//    word_ok = "hello";
	//scanf("%s", word_ok);
	word_ok = argv[1];
	printf("Entered word is %s\n", word_ok);
    
    dic = Hunspell_create("/usr/share/hunspell/en_US.aff", "/usr/share/hunspell/en_US.dic");
    
    syscall(333, getpid());
    printf("PID:%d\n",getpid());
	i = Hunspell_spell(dic, word_ok);
	syscall(333, -1);
    printf("%d\n",i);
    

    //printf("%i\n\n", Hunspell_spell(dic, word_notok));
    
    /*
    printf("%s\n\n", Hunspell_get_dic_encoding(dic));
   
    list_size = Hunspell_suggest(dic, &slist, "hejes");
    printf("%i\n", list_size);
    for (i = 0; i < list_size; i++)
    {
      printf("%s\n", slist[i]);
    }
    */
    
	Hunspell_destroy(dic);
//	sleep(100);
	return 0;
}

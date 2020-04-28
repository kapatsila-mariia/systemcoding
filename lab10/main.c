#include <stdio.h>

struct biblioteka {
       int id;
       char title [20];
       char autor [20];
       int year;
       char publisher [20];
}book;
FILE *file;
void mainmenu();
void allBook();
void newBook();
void delBook();
void findBook();

main ()
{
     mainmenu();
     return 0;
     }
void mainmenu()
{
      int i;
      printf("  -------------------------------------");
     printf("\n | 1-Vuvestu spusok knuh v biblioteci  |"
            "\n | 2-Znaytu knuhy                      |"
            "\n | 3-Dodatu novy knuhy                 |"
            "\n | 4-Vudalutu knuhu is spusky          |"
            "\n | 5-About                             |"
            "\n | 6-Vuhid z progrmu                   |\n");
     printf("  -------------------------------------\nVash vubir:");
     scanf("%d",&i);
     switch (i)
     {
        case 1: allBook(); break;
         case 2:findBook();  break;
          case 3:newBook(); break;
            case 4: delBook();break;
             case 5: about();break;
                case 6:exit(1);
              default:printf("Nepravulnuy vvid\n");mainmenu();
}
     }

void newBook()
{
     if((file=fopen("books.lib","a+"))==NULL){
          printf("File error\n");
       mainmenu();
}
else
{
      printf("\nVvedit id knuhu(0 dlya zakincennya vvody):");
      scanf("%d",&book.id);
      while(book.id!=0){
      printf("Vvedit nazvu:");
      scanf("%s",&book.title);
      printf("Vvedit avtora:");
      scanf("%s",&book.autor);
      printf("Vvedit rik vudannya:");
      scanf("%d",&book.year);
      printf("Vvedit vudavnuctvo:");
      scanf("%s",&book.publisher);
      fwrite (&book, sizeof(struct biblioteka), 1, file);
      printf("\nVvedit id knuhu(0 dlya zakincennya vvody):");
      scanf("%d",&book.id);
      }
      }
      fclose(file);
      mainmenu();
     }

void allBook()
{
      if((file=fopen("books.lib","a+"))==NULL)
      {
          printf("File error\n");
       mainmenu();
}
else
{
      int new_id=0;
printf("------------------------------------------------------------------------");
printf ("\n%-6s%-20s %-20s%-10s%-20s\n","id","nazva","autor","rik","vudavnuctvo");
printf("------------------------------------------------------------------------\n");
             while (!feof(file))
             {
 fread(&book, sizeof(struct biblioteka), 1, file);
 if(new_id!=book.id && book.id!=0)
 {

printf ("%-6d%-20s %-20s%-10d%-20s\n", book.id, book.title, book.autor, book.year ,book.publisher);

new_id=book.id;
}
      }
printf("------------------------------------------------------------------------\n");
      fclose(file);
      printf("\nNayusnit bud-yaky klavishu dlya povernrnnya v holovne menu...\n");
      getch();
      mainmenu();
      }
     };

void delBook()
{
     if((file=fopen("books.lib","r+"))==NULL)
     {
          printf("File error\n");
       mainmenu();
}
else
{
      struct biblioteka book, delbook = {0, "", "", 0, ""};
      int i=0;
      int new_id=0;
      int f_id=0;
      printf("Vvedit id knuhu,yaky potribno vudalutu:");
      scanf("%d",&new_id);
  int counter=0;
while (!feof(file))
{
          int f_id=0;
 fread(&book, sizeof(struct biblioteka), 1, file);
 counter++;
 if(new_id==book.id)
 {
         if(f_id!=book.id && book.id!=0)
         {
printf ("\nid:%-6d\nnazva:%-20s\nautor:%-20s\nrik:%-10d\nvudavnuctvo:%-20s\n", book.id, book.title, book.autor, book.year ,book.publisher);
      f_id=book.id;
}
     printf("\nVudalutu knuhu\n1-Tak\n2-Ni\nVash vubir:");
     scanf("%d",&i);
      switch (i)
      {
             case 1:
                  {
                  fseek(file,(counter -1) *sizeof(struct biblioteka), SEEK_SET);
                  fwrite(&delbook, sizeof(struct biblioteka), 1, file);
                  fclose(file);
                  printf("knuha vudalena\n");
                 printf("\nNayusnit bud-yaky klavishu dlya povernrnnya v holovne menu...\n");
                  getch();
                   mainmenu();
                   }
            case 2: fclose(file);mainmenu();
            default:fclose(file);printf("Nepravulnuy vvid\n");mainmenu();

}
      }
 }
 printf("\nKnuha ne znaydena\n");
       printf("Nayusnit bud-yaky klavishu dlya povernrnnya v holovne menu...\n");
                  getch();
                   mainmenu();
}
      }

void findBook()
{
      int f_id=0;
     int stat=0;
     if((file=fopen("books.lib","r+"))==NULL){
          printf("File error\n");
       mainmenu();
}
else
{
      int new_id=0;
      printf("Vvedit id knuhu:");
      scanf("%d",&new_id);
while (!feof(file))
{
 fread(&book, sizeof(struct biblioteka), 1, file);
 if(new_id==book.id)
 {
                     if(f_id!=book.id && book.id!=0)
                     {
 stat=1;
printf ("\nid:%-6d\nnazva:%-20s\nautor:%-20s\nrik:%-10d\nvudavnuctvo:%-20s\n\n", book.id, book.title, book.autor, book.year ,book.publisher);
    f_id=book.id;
}
      }
 }
}
if(stat==0)
{
            printf("knuha ne znaydena\n");
            }
      printf("Nayusnit bud-yaky klavishu dlya povernrnnya v holovne menu...\n");
                  getch();
                   mainmenu();
      }

void about()
{

      printf("\n About this programm:");
      printf("\n Autor: Voschulo Tamara Pavlivna");
      printf("\n Group: MCSaN-405");
      printf("\n TC TNTU");
      printf("\n 2017");

      fclose(file);
      mainmenu();
     }

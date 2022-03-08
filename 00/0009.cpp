#include <bits/stdc++.h>
/* make a donut

             k;double sin()
         ,cos();main(){float A=
       0,B=0,i,j,z[1760];char b[
     1760];printf("\x1b[2J");for(;;
   ){memset(b,32,1760);memset(z,0,7040)
  ;for(j=0;6.28>j;j+=0.07)for(i=0;6.28
 >i;i+=0.02){float c=sin(i),d=cos(j),e=
 sin(A),f=sin(j),g=cos(A),h=d+2,D=1/(c*
 h*e+f*g+5),l=cos      (i),m=cos(B),n=s\
in(B),t=c*h*g-f*        e;int x=40+30*D*
(l*h*m-t*n),y=            12+15*D*(l*h*n
+t*m),o=x+80*y,          N=8*((f*e-c*d*g
 )*m-c*d*e-f*g-l        *d*n);if(22>y&&
 y>0&&x>0&&80>x&&D>z[o]){z[o]=D;;;b[o]=
 ".,-~:;=!*#$@"[N>0?N:0];}}/*#****!!-//
  printf("\x1b[H");for(k=0;1761>k;k++)
   putchar(k%80?b[k]:10);A+=0.04;B+=
     0.02;}}/*****####*******!!=;:~
       ~::==!!!**********!!!==::-
         .,~~;;;========;;;:~-.
             ..,--------,//

documentation : https://www.a1k0n.net/2011/07/20/donut-math.html
*/
int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(nullptr);
  int yed[3];
  char hee[3];
  for (int i=0; i<3; i++) {
    std::cin >> yed[i];
  }
  for (int i=0; i<3; i++) {
    std::cin >> hee[i];
  }
  std::sort(yed, yed + 3);
  for (int i=0; i<3; i++) {
      std::cout << yed[hee[i]-'A'] << ' ';
  }
  return 0;
}
/*
 _______           _______
(  ____ \|\     /|(  ____ \
| (    \/| )   ( || (    \/
| (_____ | |   | || (_____
(_____  )| |   | |(_____  )
      ) || |   | |      ) |
/\____) || (___) |/\____) |
\_______)(_______)\_______)

00000KKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKK0Oxl:,'';;::;;:lllloddl:,,;:::looc;,,,,:cccclolc:::::,'..'''',:cc:,..,:clc:;,,'....,coxkkkkkkkkkkkkxxxxxxxdddddddoooooooooooooollllllllllllllllllllcccccccccc
0000KKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKK0Oxo:,'',;::;;:lllloxdl:,,,,,,;::;,'''',,,;codoc::ccc;'..''',;:cc;'.';:ccc:;,,'....,cdxkkkkkkkkkkkkxxxxxxxdddddddoooooooooooooollllllllllllllllllllcccccccccc
000KKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKK0Oxo:,'',;:;;;:cllldxdo:,,,,,,,,,;;,,,,,,,,:cc:;;:llc:;,'''',;cc:,..,;:cc::;,,'....,cdkkkkkkkkkkkkxxxxxxxxdddddddoooooooooooooollllllllllllllllllllcccccccccc
000KKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKK0Oxoc,'',;;;;,;cllloddl:;,,,,,,,,,,,,,,,''',,;;:cclollcc:;;,,;clc;,',;:::::;;,'....,cdkkkkkkkkkkkkxxxxxxxxdddddddoooooooooooooollllllllllllllllllllcccccccccc
000KKKKKKKKK0KKKKKKKKKKKKKKKKKKKKKKKKKKKKKK0Oxoc,'',;;;;,;cclllool:,,,,,,,,,;;;;;;;;;;;;:cllllllllollc:;;cllc:;;::::::;;,'....,cdxkkkkkkkkkkkkxxxxxxxdddddddoooooooooooooollllllllllllllllllllcccccccccc
000KKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKK0Oxoc,'',;;;;,;:ccllool:;,;::cccccccccllcc::clolcccc::::c::;,;clllc:::::::;;,,''...,cdxkkkkkkkkkkkkxxxxxxxdddddddoooooooooooooollllllllllllllllllllcccccccccc
000KKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKK0Okoc;'',;;;;,;:ccclool:,,:clllllllccc:::;;;:::;;,,,,,,,,,,,,;cc::;;,,,,,,,,'''....,cdxkkkkkkkkkkkkxxxxxxxdddddddoooooooooooooollllllllllllllllllllcccccccccc
0000KKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKK0kdc;'',,;;;,;:ccclool:,,;::::;;;,,,'''''''''''''''''''''',,;;,,''...'''',,'''....';ldxkkkkkkkkkkxxxxxxxxdddddddoooooooooooooollllllllllllllllllllcccccccccc
00000KKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKK0kdc;'',,;;;,,:ccclool:,'',''''''.........................''''''''...............'',;:codxkkkkkxxxxxxxxxxdddddddoooooooooooooolllllllllllllllllllllcccccccll
00KKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKK0kdl;''',,;;,,:ccccll:,'''........................................''''.............'',,;:lodxxxxxxxxxxxxxdddddddoooooooooooooollllllllllllllllllllcclloddxxx
0KKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKK0Odl;''',,;,,,;:::;,'..................................................''''',,.......'',,;:lodxxxxxxxxxxddddddddoooooooooooooolllllllllllllllllllodxxkxdolc:
KKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKK0Odl;''',,;,,,,,'..........................................................,:c:;,......'',;:codxxxxxxxxxxdddddddoooooooooooooolllllllllllllllldxxkxol:;,''''
KKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKK0Oxl:''',,,,''...............................................................,:clc,.....',,;:ldxxxxxxxxxxdddddddoooooooooooooollllllllllllloxxxdl:;,'''.....
KKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKK0Oxo:,'''''....................................................................':l:',,'...',,:lodxxxxxxxxdddddddooooooooooooolllllllllllodxxoc;,'''.........
KKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKK0Oxo:,'..........................................................................',;clc;'..'',:lodxxxxxxddddddddooooooooooolllllllllllodxxl:,'''............
KKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKK0Odc,'..............................................................................,:lol:,..',:coddxxxddddddddooooooooooooollllllllodxdl;,''...............
KKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKOd:'..................................................................................':odoc,',:coddddddddddddoooooooooooooooollllloxxo:,''.................
KKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKK0Ol,......................................................................................':dkxc,,:odxxxxdddddddoooooooooooooooolllodxoc,''...................
000KKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKK0kc'.........................................................................................'lk0x:,:loddddddddddoooooooooooollolllodxl;''.....................
000KKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKK0x:'............................................................................................;xK0d;;lodddddddddooooooooooooolllloddc,''......................
0000KKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKK0xc,....................................................................................'..........l0Xkccoddddddddddoooooooooooollooddc,'........................
0000KKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKKK0kc'.....................................................................................''..........;kX0ocodddddddddoooooooooooolooddc,'.........................
00000000KKKKKKKKKKKKKKKKKKKKKKKKKKKKK0Ol'...................................................................................................'d0Olclddddddddooooooooooollodoc,'..........................
0000000KKKKKKKKKKKKKKKKKKKKKKKKKKKKK0Ol'......................................................................................................cxdc:cloddddooooooooooooloddc,'...........................
000000KKKKKKKKKKKKKKKKKKKKKKKKKKKK000o'..........................................................................................''............,cccccloddooooooooooolloddc,'............................
00000000KK0KKKKKKKKKKKKKKKKKKKKKK00Kx,..........................................................................................................';:coooddoooooooooooloddl;''.............;:;,,,',,....',
000000000000KKKK0KKKKKKKKKKKKKKKKKKk:.....................................................................................................'.......',cddddooooooooooooodo;''.............;:,.....';:....,
0000000000000KKK0KKKKKKKKKKKKKKKKK0l................................................................................................................:dddddooooooooooodo:''.............,;,.....'::,...',
00000000000000K00KKK0KKKKKKKKKKKKKx,.............................................................''........'..''....................................;odddoooooooooooooc''..............,,''''',,'..',,'.
00000000000000000KK00KKKKKKKKKKKK0c............................................................''''''''.....''''''..................................,oddoooooooooooool,'................................
000000000000000000000KKKKKKKKKKKKk,............................................................'''',,,,''....'''''..',,'.............................;loooooooooooool;'.................................
000000000000000000000KKKKKKKKKKKKo...................''''''...........'''........'''.......'....''',,;;,,.....',,,''';;,,'..........................'';clooooooooooo:'..................................
0000000000000000000000000KKKKKKK0c..................',,,,;,,,',''....'''''''.....',,,,'''..''''..'',,;::;,....',;;,,,;;;;,'.......................''',;::loooooooool,...................................
0000000000000000000000KKKKKK000Kk;..................',,;;;;;;,,,,,'...'',,,''.....',;;;,,,''''''..',,,:c:;,'''',,,;;;;::::;,.....................''''';:,:ooooooodl;'...................................
00000000000000000000000000OOkkxxl'..................',;;;;::::;;;;,''...',,,,,'...'',;;;;;;,,',,'''',,:ccc;,,,,;;,;::::c:::;,'..................'''''';c',looooooo:'....................................
00000000000OOOOOOkkkxxxdddolcc::;...................',;;:::::::::;;;,''...',;;,,'''',,;:::::;;;::::;;;:ccc:;,,',;;;;:::ccc:::;'.................'''''':c'.cooooooc,.....................................
OOOOOOOkxxddddolllccc:::;;;;;;;;,..................',;;::::cccccccc::;,,''',:ccc;,,,,;;::cccc:ccllolllc::::;,,,'',;;;::::ccc::,.............'..''''''':l,.;oooooo;......................................
ddddoollc::;;;;;;;;;;;;;;;,,,;;;;'.................',;;::::cccllllllccc:;;,;:llllc::;:::ccllcccllcc::;;,,,,,,,,,,,,,,;;;:::::;'.....  ......,'.','''',:l,.,loooo:'......................................
:::;;;;;;;,,,,,,,,,,,,,;;,,,;;;;;'.................,;;:::::ccccllllllllllccccclllllcccccclllccc:;,,'''..''',,,,,,,,,,,,,,,,,'...............,'.',,''',:l,.'loodl,.......................................
,,,,,;;;,,,,,,,,,,,,;,,;;,,;;;;,;,'...............',;;;;;;;;:::::::::::cccccccclllllllllccc:;;,'''''.'''',,,,,,,,,,,,''.....................''.',''''':c,..cool;........................................
,,,,,,,,,,,,,,,,,,,,,,,,,;,,;;;,;,'...............',;;,,,,;;,,,''''''''',;;::::ccccccccc::;,''..''',,,,;;;;::;;:::::;;;,'......'............''.''''''';c'..cdo;'........................................
,,,,,,,,,,,,,,,,,,,,,,,,,;,,,,;,,,'...............';;,,,,,,''''''.......''',,,,;;;::::;,,'...'',,;;,,,,,,,''''',,,;;;;;;,'...,;:;,''........'.........,:'..co:'.........................................
,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,'............. .';;,,''''''''''''''''''''''.......'.....',;:;;;,,,,,,.......''..',,;,,;,..,:ccc:;;,.................',..'cc'..........................................
,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,;,.................'.....',;;::::;;;;,,,,,,,'''..........';::::;;,,,;;;,,;;;;;;;,,,,,;;;;..;cccccc:;'.................'..';,...........................................
,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,;,'...................',,;;;;::;;,,,',;;:;;,,,,....,;,....',;:;;;;;;;;:::cccc::::::::::::'.:llllccc:;'....................'............................................
,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,;;'................,,,,;;;,,'''''''''',::;,,,;,...,cllc,...,:ccc::;;;;;;:::::::ccclccccc:',lllllllcc:,'''''''''........................................................
,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,;,'..............';:::;;,,'',;;::::;;;;;;;;;;,...:loooc;...,:ccc::::::::::::cclllllllcc,':llllllllcc;,,,,,,,,,''''.......................''''',,,,,,,'''''............
'',,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,;;'...............;::::;;;;:::cccccc:::;;;;;;,..,cloodol;'..':ccccccccccclllllllllcc:;,;clllllllllcc:;;;;;;;;;,,,,,,'''...............'',,;;;;::::::::::;;;;;,,''.....
''''',,,,,,,,,,,,,,,,,,,,,,,,,,,,,,;,...............,:cccc::::::::::;;;;;;;:::;'..;cloodool:,..':cccccccccccc:::;;;;,,;:clllllllllllllc::::::::::::::;;;;;;,,,''''',,,,;;;;::cccclllllllllcccccccccc::;;
'''''',,,,,,,,,,,,,,,,,,,,,,,,,,;;;;,...............';ccccccccccc::::::::::cc:,..,:lloodooolc:,'''',,,,,,,,,,,,,;::cllooooooollllllllllcccccccccccccccccccccc:::::::::::ccccllloooooddddoooooooooodooolc
'''''''',,,,,,,,,,,,,,,,,;;::cllodxdc'.............',,;cccclllllcccccccccc:;,'',;:clloooooolllcc::;;;;;:::cccllloooooddoooooooollllllllllllllllloooooooooooooollllllllllloooodddddxxxxxxxxxxxxxddddddddo
'''''''',,,'',,,'',,,,:clodxkkOO00KKk;..............:c;;;:::cccc::::;;;,,,,,,;::::cllooooooolllllcccccccllllloooooddddddooooooolllooooooooooooddddddxxxxxxxxxddddoodddddddddxxxxxxkkkkkkkkkkkkkkkxxddddd
'''''''''''''''''''',cokOOOOOO00KKKK0o'.............;llc::;;;;;;;;;::::::ccc::::ccllloooooooolllllccccccccclllooooodoooooooooooollooooooooddddxxxxkkkkkkkkkkkkkxxxxxxxxxxxxxxkkkkkkkkkkkkOOOOOOOOkkkxxdd
.''',,,'''''''''',',;lxkkxdoldxO00KK0kc.............,llllloooooooooooolllc:::::cclllooooooooollllllccc::::ccclllloooooooolllllllllloooooddddxxkkkkOOOOOOOOOOOOOOkkkkkkkkkkkkkkkkkkkkkkkkkOOOO000OOOOkkxx
;,,;cc:,''''''',,,,,;cdkkxdlloxkkkkkkkx:............'clloooooooooooooolcc:::ccccllllloooddoooloooolllc::::::::cccllllllllllllccclllllooodddxxxkkOOOO0000000000OOOOOOkkkkkkkkkkkkkkkkkkkkkOOOO000000OOOkk
llccodl:;;:;;,;::::cclok00Oxooxxdoddddxxc............clooooooooooooollc:::::clcclllllllooollcccllllccc::cc::;;;;::cccccccccccccccclllloooddxxxkkOOOO00000000000OOOOOOkkkkkkkkkkkkkkkkkkkkOOOOO00000OOOOO
lodddxocldddolloddodxdoxO00kdodxdooddodxdl'.... .....coooooooooollllc::::::::::;;:::ccccc::;;,,,;;;::::ccccc::;;,;;;::::::::::::::ccclllooddxxxkkOOO000000000000OOOOOOkkkkkkkkkkkkkkkkkkkOOOOOOOOOOOOOOO
:coxxxoloxxdddoodxdoxxddk00Oxoodxoooooodddoc;,'',,;'':llllollllllcc::;;::::;;;,''',,,;;;;,,,,,,;;;;::::ccccc::::;,,,,;;;;:::::;;:::::cccllooddxxkkOOO000000000000OOOOOOkkkkkkkkkkkkkkkkkkOOOOOOOOOOOOOOk
c:coxxoclddooddooxdodxdodk00OdooxdolllodxddxkkOOOO0Ooclllllllcccc:;;;;;;::::;;;;;,,,,,,,,,,,;;;:::::cc::::::::::;;,,,,,;;;;;;;;;;::::::cccllooddxkkOO00000000000OOOOOOkkkkkkkkkkkkkkkkkkkOOOOOOOOOOOOOkk
lc::oddccoddodxdodxdddxdodk0OkdoxxxdddxkOOO00KKKK00koccccccccc::;;,,;;;;;;;;;;;;;;;;;;;;;;;::::cccccccccc::::::;;,,,,,,;;;;;;;;;;;;;:::::ccclloodxkkOOO00000000OOOOOOOkkkkkkkkkkkkkkkkkkkOOOOOOOOOOOOOkk
''',:odl:codddddlcododdoccdkOOkkkOOOOOOO0000OOOkxolc:;:ccccc:::;,,,;;;;;;;:::::::::::::ccccccccc::::::;;;;;,,,'''''',;;:::;;;;;;;;;;;;:::::cccllodxxkOOOOOO000OOOOOOOOkkkkkkkkkkkkkkkkkkkOOOOOOOOOOOOOkk
....,:ll:,;ccll:;,;::;;;,,:oxkkkkkxxddoooollcc::;;,,,,;:c:::::;;,,,,,,,,;;;;;;;;;;;;;;;:::::;;;;;,,,,,,,'''.....',,,;;:::;;;;;;;;;;;;;;;::::ccclloddxkkOOOOOOOOOOOOOOkkkkkkkkkkkkkkkkkkkkkOOOOOOOOOOOOkk
.....',,'''',,''''''''''''';:cccc:::;;,,,,,,,,,,,,,,,,,;:::::::::;;,,,'''.....'',,,,,,;;;;;;;:;;:::;;:lc;;,'''',;::;;;:;;;;;;;;;;;,;;;;;;::::ccclooddxkkkOOOOOOOOOOOOkkkkkkkkkkkkkkkkkkkkkkOOOOOOOOOOOkk
.........''''''''''''''''''''''''''''''''''''',,,,,''...,::::::::::;;;;,'.....,:c::ccclooccodxoldxdllool::;,,;;:::::;::;;;;;;;;;,,,,;;;;;;;::::cclooddxkkkOOOOOOOOOkkkkkkkkkkkkkkkkkkkkkkkkOOOOOOOOOOOkk
...............'''''''''''''''''''''''''''''''''''.......';:::::cccc:::::;,'..,cododddxkkddxkkxdxxdolll:;;;;:::cc:::::::;;;;;;,,,,,,;;;;;;;;::::cllooddxxkkkkkkkkkkkkkkkkxxxxxxxkkkkkkkkkkkkOOOOOOOkkkkk
................'''''''''''''''''''''''''''''''...........';::::::cc:::::::;;;;;cllodddxxxdxxxdolllc::::::::::ccc::::::;;;;,,,,,,,,,,;;;;;;;;:::ccllloddxxxkkkkkkkkkkkkkxxxxxxkxxxkkkkkkkkkkOOOOOOOOkkkk
...............'''''''''''''''''''''''''''''................,;::::::cc:ccc::::::::::ccclllccccccccc::::::::::cc:::::::;;,,,,,,,,,,,,,;;;;;;;;;:::cccllodddxxxxxkkkxxxxxxxxxxxxxxxxkkkkkkkkkkkOOOOOOkkkkk
.............''''''''''''''''''''''''''''''...................,;;;;:::cccccc::::::ccccccccccccccccc::::::::::::::ccc:;;,,,,,,,,,,,,,,;;;;;;;;;;:::cclloodddxxxxxxxxxxxxxxxxxxxxxxkkkkkkkkkkkkkOOOOOkkkkk
........'''''''''''''''''''''''''''''''''''.....................,;;;;:cccccccc::::::cccccc::::::::::::::::::::cccc::;;,,,,',,,,,,;;;;;;;;;;;;;;;:::ccllloodddddxxxxxxxxxxxxxxxxxxkkkkkkkkkkkkkkkOOOkkkkk
.........'''''''''''''''''''''''''''''''''.......................'',;;;:::::cc::::::::::::::;;;;;;:::::::::::cccc::;;,,'''',,,,,;;;;;;;;;;;;;;;;;:::ccllloodddddddddddxxxxxxxxxxxxxxkkkkkkkkkkkkkkOkkkkk
...........'''''''''''''''''''''''''''''............................',,;;::::::::::::;;;;;;;;;;;;:::::::::cccccc::;;,''''',,,,,,;;;;;;;;;;;;;;;;;;:::ccclloooooddddddddddddxxxxxxxxxkkkkkkkkkkkkkkkkkkkk
.................'''''''''''''''''''''.................................',;;:::ccc:::::::::::::::ccccccccccccccc::;,'..'',,,,,,,;;;;;;;;;;;;;;;;;;;;:::ccclllooooooddddddddddxxxxxxxxxkkkkkkkkkkkkkkOOkkk
..................''''''''''''''..........................................';;:ccccccccccccccccccccccccccccccc::;,''.''',,,,,,,,;;;;;;;;;;;;;;;;;;;;;:::ccclllllooooooooddddddxxxxxxxxxkkkkkkkkkkkkkOOOOk
.............'''...''''''''.................................................';:ccccccccccccclllcccccccccccc::;;,'..''',,,,,,,,;;;;::;;;;;;;;,;;;;;;;;:::ccccllllllooooooodddddxxxxxxxxxkkkkkkkkkkkkOOOOO
............''''..'''''..''',,,;;;'........................................ ..,:::ccccccccccccccc::ccccc:::;;,'..''''',,,,,',,;;;::::;;;;;;,;,,,;;;;;;;:::cccccclllllooooooddddxxxxxxxxxkkkkkkkkkkOOOOOO
......''.....'''''',,,;;::ccllooo;.........................................   ..;;:::::::ccccc::::::::;;;,,''..'''''',,,'''',,;;::::::;;;;;,,,,,,,,,;;;;;::::cccccclllllooooddddxxxxxxxxxkkkkkkkkkOOOOOO
......''''''',,;::clllooddddxxxd:.........................................      ..,,;;;;;;;;;;;;;;,,,,,'''...'''''',,''...'',;;;:::::::;;;;;,,,,,,,,,,;;;;;::::::ccccllllooodddddxxxxxxxxkkkkkkkkkkOOOOO
......,;;::cclloodddddxxxxxxxxxl'.........................................  ..    ...''''',,,''''''.......''''''''''......',,;;:::::::::;;;;,,,,,,,,,,,,;;;;;;;;::::cccllloooddddxxxxxxxxxkkkkkkkkkkOOOO
.....':loodddddddxxxxxxxxxxxxxd;............................................         ...''''''''.......''''''''''........'',;;:::::::::::;;;;,,,,,,,,,,,,,,,,;;;;;;:::ccllooodddddxxxxxxxxkkkkkkkkkkkOOO
.....,cdxxxxxxxxxxxxxxxxxxxxxx:...............................................    .    ...''''''''..''''''''''...........',,;;:::ccc::::::;;;;,,,,,,,,,,,,,,,,,,,,;;::cccllooodddddxxxxxxkkkkkkkkkkkkkkO
.....'cdxxxxxxxxxxxxxxxxxxkkkl'........................................   ...................''''''''''''''.............',,;:::ccccc:::::::;;;;,,,,,,''''''''''',,;;;::cclloooddddddxxxxxkkkkkkkkkkkkkkk
.....'cdxkxxxxxxxxxxxxxkkkOOd,.......................................... ......... ...........'''''''''''..............',,;;::ccccccc:::::::;;;;;,,,,'''''''.'''',,;;::cclloooddddddxxxxxxxkkkkkkkkkkkkk
.....,cdxxxxxxxxxxxxxkkOOOOx:............................................  ......................''''''...............',,;:::ccccccccc:::::::;;;;;,,,'''''.....'',,;;::cclllooddddddxxxxxxxxkkkkkkkkkkkk
;:clloodddxxxxxxxkkkkkOOOOkc..............................................     .......................................',;::cccclcccccc::::::::;;;;,,,,''''......'',,;;:cclllooodddddxxxxxxxxkkkkkkkkkkkk
;;;:clodddxxkkkkkkkkkkkkkko,................................................    .....................................,,;::cccllllccccc::::::::;;;;;,,,''''......'',,;;:ccllloooddddddxxxxxxxkkkkkkkkkkkk
;;,,'',;:clodxxkkkkkkkkkkx:..................................................   ...    .............................,,;;:cclllllllccccc::::::;;;;;;,,,''''.....''',;;;::ccllooooddddddxxxxxxxkkkkkkkkkkk
,;;;;;,,''',;;:cloddxxxxxl'...................................................   ...   ............................',;;:cclllolllllcccc:::::;;;;;;,,,,,'''''..''',,;;:::ccllloooodddddxxxxxxxkkkkkkkkkkk
,,,,;;;;,,,''''',,;;:cloo;.....................................................  .................................',;::cclloooolllllccc:::::;;;;;;,,,,,''''''''',,,;;:::cccllooooodddddxxxxxxxkkkkkkkkkk
,,,,,,,',,,,,''''''''',,,........................................................ ...............................',;::ccllooooooollllccc::::;;;;;,,,,,,''''''''',,,;;:::ccclllooooodddddxxxxxxxkkkkkkkkk
'''',,,''','''''''''''''.........................................................  .............................',;;:ccllooooooooolllcccc:::;;;;;,,,,,''''''''',,,;;;::::cccllloooooddddddxxxxxxxkkkkkkk
*/

#include <iostream>
#include <random>

int main() {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(nullptr);
  std::random_device rd;
  std::mt19937 gen(rd());
  std::uniform_int_distribution<> distr(1, 3);

  switch(distr(gen)) {
    case 1 :
      std::cout << 'P';
      break;
    case 2 :
      std::cout << 'R';
      break;
    case 3 :
      std::cout << 'S';
      break;
  }
  return 0;
}
/*
cccccccccccccccccccccccccccclllllllllllllllllllllccllcllclllllllllllcccccccccccccccccccccccccccccccc
cccccccccccccccccccccccccccccccccccllllllllllllllccccclllllllllllllccccccccccccccccccccccccccccccccc
ccccccccccccccccccccccccccccccccccccccllllllllllcccccclllllllllllllccccccccccccccccccccccccccccccccc
ccccccccccccccccccccccccccccccccccccllllllllllllccccllllllllllllllcccccccccccccccccccccccccccccccccc
ccccccccccccccccccccccccccccccccccclllllllllllllccccccllllllllllllcccccccccccccccccccccccc::ccc:cccc
ccccccccccccccccccccccccccccclllllllllllllllllllccccccccclllllllllcccccccccccccccccccccc:::::::::ccc
ccccccccccccccccccccccccccccccllllllllllllllllc:;;;;,'',;::ccllllllccccccccccccccccccccc::::::::::::
ccccccccccccccccccccccccccccccccccccccccc:;,''.....      ..,;:clllllcccccccccccccc::::::::::::::::::
ccccccccccccccccccccccccccccccccllccc;,....                 ..,:clllccccccccccccccccccccccc:::::::::
cccccccccccccccccccccccccclllllllc:,..                         ..';:cccccccccccccccccccccccccccccccc
cccccccccccccccccccccccllccllllcc;.                               ..,:ccccccccc:::::::::::::::::::::
cccccccccccccccccccccclllllllllc;.                               .  .';:cccccccccccc::::::::::::::::
cccccccccccccccccccccclcllllllc;.                   ....         ..  .':cccccccccccccccc::::::::::::
cccccccccccccccccccccccllclllc;....     .  ........,:c:,....      .   .,ccccccccccccccccc:::::c::ccc
ccccccccccccccccccccccclcclcc:......  .......';;:odxkdolc;,'....  ..  ..;cccccccccccccc:::::::::::::
cccccccccccccccccccccccccclcc;........',;:clloxkO00000Okkxxoc;'....    .;cccccccccccccc:::::::::::::
cccccccccccccccccccccccccccc:.  ...';lodxkOOOOOO00KK00OOOOkkxxoc,..     ':cccccccccccc::::::::::::::
cccccccccccccccccccccccccccc;.  .,codxkkkkkkOOkO00000OOOOOkkkkxxdc,..   .;ccccccccccc:::::::::::::::
cccccccccccccccccccccccccccc,. .;lddxxkkkkkOOOOOOOOOOOOOOkkkkkxxxdoc,.  .:ccccccccccc:::::::::::::::
cccccccccccccccccccccccccccc;..,lodddxkkkkOOOOOOOOOOOkOOOOkOkkkxddolc'  ':ccc:ccccccc:::::::::::::::
cccccccccccccccccccccccccccc:..:loollooddxkOOkOOOOOOOkkkkkkxdolc::ccc;..,ccc::c:::::::::::::::::::::
ccccccccccccccccccccccccccccc,.;l:;,;;,,,;:cldxkkkkkkkkdlc;,,,,,;,,,;;..;c::::::::::::::::::::::::::
cccccc::::::ccccccccccccccccc:';c:;:cclooc:;;codxxxxxdolc:::loollc:;;;.'::::::::::::::::::::::::::::
:::::::::::::::ccccccccccccccc,;cccc:;;;;;:ccllodxkkkdolcc;,'..',,,;:;,:c:::::::::::::::::::::::::::
::::::::::::::::ccccccccccc::c::cc:,',,..';;:lldxOOOOxoll:;;'..;,',:c:cc;;::::::::::::::::::::::::::
::::::::::::::::cccccccc::cc:;:cloolcclcclddoddxkO00Okdddddollllllloolccllc:::::::::::::::::::::::::
::::::::::::::::::ccccc::::coolcldxxdddoodxxxxxkkO000kkxxxxxdddddddddllddo::::::::::::::::::::::::::
::::::::::::::::::::::::::::cddcldxxxxkkkOOkkxxkOO000kkxxxkkkkkkkxxdoloxo:;::::::::::::::::::::::;;;
:::::::::::::::::::::::::::::colcoddxkkkOOkkxxxkOO000Okxdxxkkkkkxxdolcll:;;;::::::;;;::::::;;:;;;:::
:::::::::::::::::::::::::::::::cclodxxkkOkkxdxkkOO00OOkkxdxkkkkkxxdlc:c:;;;;;;;;;;;;::::;;;;;:::::::
:::::::::::::::::::::::::::::::::clodxxkkkkxdooloddddllloodxkkxxxdoc:::;;;;;;;;;;;;;::;;;;;;;;;;;:::
::::::::::::::::::::::::::::::;;;:loodxxxxkxc,''',,''''',cdkxxxxdolc:;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
:::::::::::::::::::::::::;;;;;;,,;clodddxxxxdllcc:;;:clcldxxxdddolc:;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
::::::::::::::::::::::::;;;;;,,,',:lloooooooooooddxxddoooolloooolcc;,;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
::::::::::::::::::::::;;;;;;;,,''.,:cllcc::;;:::;;::;;;;;;;::cllc:;,,,;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;:::;;;;;;;;;;;;;;;;;;;;;;;;,,''...,:cccllllllllllllllcccllolccc:;'',,,,;;,;;;,,,;;;;;;;;;;;;;;;;;;;
;;;;;;;;;;;;;;;;;;;;;;;;;;;,,''.....;::ccllloooollolllllllllcc:;,..'',,,,,,,,,,,,,,,,;;;;;;;;;;;;;;;
;;;;;;;;;;;;;;;;;;;;;;;;;;,,,''....';;:cc:::ccccccccccccc:::::;,...'',,,,,,,,,,,,,,,,,,;;;;;;;;;;;;;
;;;;;;;;;;;;;;;;;;;;;;;;;;,,,''...';;;;:ccc::::::::::::::::::,,',,'''',,,,,,,,,,,,,,,,,,;;;;;;;;;;;;
;;;;;;;;;;;;;;;;;;;;;;;;;;,,,''';ll:;;,,;:cllcclllllllccccc:,''';ll;'',,,,,,,,,,,,,,,,,,,,,,,,;;;;;;
;;;;;;;;;;;;;;;;;;;;;;;;,,;:codx0O:;:;;,,,;:cc::::::;;;;:;,''',,;d0Oo:,,,,,,,,,,,,,,,,,,,,,,,,,,,,,;
;;;;;;;;;;;;;;;;;;;;;;;coxO0KKKKXx,,::;,,,,,;;,,'''''',,,'''',;,:kXKKOd:,,'',,',,,,,,,,,,,,,,,,,,,,,
;;;;;;;;;;;;;;;;;;;coxOXNNXXXKKXXd',:::;,,,,,,,,''''',,,,'',,;:;:ONXXKKOkdoc;,',,,,,,,,,,,,,,,,,,,,,
;;;;;;;;;;;;;;;:cok0XNNNNXXXXXKXXd;;:c::;;,,,,,,,,,,,,,,,,,;;::;:OXXXKKKKKKKOxl:;,,,,,,,,,,,,,,,,,,,
;;;;;;;;;;;:loxOKXXXXXNNXXXXXXXXXOolllcc::;,,,,,,,,,,,,,,,;:clclkXXXXXKKKKKKXNXKOxoc;,,,,,,,,,,,,,,,
;;;;;;;:coxOKXXXXXXXNNNNXXXXXXXXNKOxooolc:;,,,,,,,,,,'',,;:clodOXNXXXXKKXXXKXXXXXXXKOxoc;,,,,,,,,,,,
;;;;;cdk0KXXXXNXXXNNNNNXXXXXXXXXNK00kddolc:;,,,,,,'''',;;clodkKXNXXXNXKKXXXXXXXXXXXXXXK0kdl:,,,,,,,,
;;;:d0KKXXXXNNXXXNNXXXXXXXXXXXXNNXKKK0kxddolc::;;,,;;:clodxk0XNNNXXNNXKKXXXXXXXXXXXXXXXXKK0Oxl:,,,,,
;,:xKXXXXXXXNNXXXNNNXXXXXXXXXXXK0kxOKKK0kkxxdddddoooddxkkk0KXNNNXXNNNNXKXXXXXXXXXXXXXXNXXKKKKKkc,,,,
;;dKXXXNXXXXXXXXNNNNXXXXXXXXXKkl;,,ck0KK00OkkkkOkkkkkkkOO0XXXNNNNNNNNNXKXXXXXXXXXXXXXNXXKKXKKKKx;,,,
*/

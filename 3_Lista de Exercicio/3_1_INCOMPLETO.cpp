#include <iostream>
#include <string>
#include <bitset>

using namespace std;

using byte = unsigned char ; // 8 bytes


/*void ini_p(int v[5], int j = 5 )
{
    for (int i = 0; i <= j; i++)
    {
    
        if(v[i] == 1 || v[i] == 00000001)
        {
            cout<< "" << endl;
        }

    }
    
}*/
struct Decoding{

uint8_t URG:1; //URG == transferencia de dados com urgencia
uint8_t ACK:1; //ACK == bit de confirmacao, aviso de recepcao 
uint8_t PSH:1; //PSH == bit de push
uint8_t RST:1; //RST == bit de reset, conexão reiniciada
uint8_t SYN:1; //SYN == bit de sincronismo  pedido de estabelecimento de conexão
uint8_t FIM:1; //FIM == bit de finalizacao

};

/*int byte_func(byte b(1))
{
    byte b(1);
 
    bitset<8>l_display(b);

    cout << l_display << endl;
} 8 BYTES, BINARIO*/
int main()
{


   }
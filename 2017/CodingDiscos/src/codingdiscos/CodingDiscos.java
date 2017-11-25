// Bibliotecas
package codingdiscos;
import janelas.*;
import java.io.*;
// --

// Classe Principal - CodingDiscos
public class CodingDiscos {

    public static void main(String[] args) throws IOException {
        // Criação das Pastas/Arquivos necessários
        new File("database").mkdir();
        new File("database/produtos").mkdir();
        new File("database/statusLoja.txt").createNewFile();
        new File("database/users.txt").createNewFile();
        
        // Inicialização da Janela Principal
        new janelaLogin().setVisible(true);
    }
    
}

package janelas;
import javax.swing.JFrame;
import javax.swing.JOptionPane;
import java.io.*;

public class cadastrarProduto extends javax.swing.JFrame {

    public cadastrarProduto() {
        initComponents();
    }

    @SuppressWarnings("unchecked")
    // <editor-fold defaultstate="collapsed" desc="Generated Code">//GEN-BEGIN:initComponents
    private void initComponents() {

        cmpTitulo = new javax.swing.JTextField();
        cmpArtista = new javax.swing.JTextField();
        cmpPreco = new javax.swing.JTextField();
        preco = new javax.swing.JLabel();
        artista = new javax.swing.JLabel();
        titulo = new javax.swing.JLabel();
        tituloJanela = new javax.swing.JLabel();
        descricao = new javax.swing.JLabel();
        btConfirmar = new javax.swing.JButton();
        btCancelar = new javax.swing.JButton();
        jScrollPane2 = new javax.swing.JScrollPane();
        arDescricao = new javax.swing.JTextArea();
        btLimpar = new javax.swing.JButton();

        setDefaultCloseOperation(javax.swing.WindowConstants.DO_NOTHING_ON_CLOSE);
        setTitle("CodingDiscos - Cadastrar Produto");

        preco.setText("Preço (R$)");

        artista.setText("Artista");

        titulo.setText("Título");

        tituloJanela.setFont(new java.awt.Font("Cantarell", 1, 36)); // NOI18N
        tituloJanela.setText("Cadastrar Produto");

        descricao.setText("Descrição");

        btConfirmar.setText("Confirmar");
        btConfirmar.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                btConfirmarActionPerformed(evt);
            }
        });

        btCancelar.setText("Cancelar");
        btCancelar.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                btCancelarActionPerformed(evt);
            }
        });

        arDescricao.setColumns(20);
        arDescricao.setRows(5);
        jScrollPane2.setViewportView(arDescricao);

        btLimpar.setText("Limpar");
        btLimpar.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                btLimparActionPerformed(evt);
            }
        });

        javax.swing.GroupLayout layout = new javax.swing.GroupLayout(getContentPane());
        getContentPane().setLayout(layout);
        layout.setHorizontalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(layout.createSequentialGroup()
                .addGap(70, 70, 70)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addGroup(layout.createSequentialGroup()
                        .addGap(25, 25, 25)
                        .addComponent(tituloJanela))
                    .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.TRAILING, false)
                        .addGroup(layout.createSequentialGroup()
                            .addGap(34, 34, 34)
                            .addComponent(btConfirmar, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                            .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.UNRELATED)
                            .addComponent(btLimpar, javax.swing.GroupLayout.PREFERRED_SIZE, 71, javax.swing.GroupLayout.PREFERRED_SIZE)
                            .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.UNRELATED)
                            .addComponent(btCancelar, javax.swing.GroupLayout.PREFERRED_SIZE, 100, javax.swing.GroupLayout.PREFERRED_SIZE))
                        .addGroup(javax.swing.GroupLayout.Alignment.LEADING, layout.createSequentialGroup()
                            .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.TRAILING)
                                .addComponent(artista)
                                .addComponent(titulo)
                                .addComponent(descricao))
                            .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                            .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.TRAILING)
                                .addGroup(layout.createSequentialGroup()
                                    .addComponent(preco)
                                    .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                                    .addComponent(cmpPreco, javax.swing.GroupLayout.PREFERRED_SIZE, 100, javax.swing.GroupLayout.PREFERRED_SIZE))
                                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING, false)
                                    .addComponent(jScrollPane2)
                                    .addComponent(cmpArtista)
                                    .addComponent(cmpTitulo))))))
                .addContainerGap(89, Short.MAX_VALUE))
        );
        layout.setVerticalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(layout.createSequentialGroup()
                .addContainerGap()
                .addComponent(tituloJanela)
                .addGap(18, 18, 18)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(cmpTitulo, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(titulo))
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.UNRELATED)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(cmpArtista, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(artista))
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.UNRELATED)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addComponent(descricao)
                    .addComponent(jScrollPane2, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE))
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.UNRELATED)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(cmpPreco, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(preco))
                .addGap(12, 12, 12)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                    .addComponent(btConfirmar)
                    .addComponent(btCancelar)
                    .addComponent(btLimpar))
                .addContainerGap(39, Short.MAX_VALUE))
        );

        pack();
    }// </editor-fold>//GEN-END:initComponents
    ///////////////////////////////////

    // Variáveis para se Conectar com a Janela Anterior
    JFrame pai;
    public cadastrarProduto(JFrame anterior){
        this();
        pai = anterior;
    }
    
    
    
    
    // FUNCIONALIDADES DO BOTÃO "CONFIRMAR"
    ///////////////////////////////////
    private void btConfirmarActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_btConfirmarActionPerformed
        String titulo = cmpTitulo.getText();
        String artista = cmpArtista.getText();
        String descricao = arDescricao.getText();
        String preco = cmpPreco.getText();
        
        if(titulo.equals("") || artista.equals("") ||
                descricao.equals("") || preco.equals("")){
            JOptionPane.showMessageDialog(this, "Preencha todos os campos!", 
                                          "Erro", JOptionPane.ERROR_MESSAGE);
        }
        else{
            File file;
            String aux1, aux2, aux3;
            int qtdProdutos;
            
            try{
                // ---------------------------------------
                // Abrir o arquivo "statusLoja.txt" e ler
                // quantos produtos tem cadastrado!
                file = new File("database/statusLoja.txt");
                FileReader fReader = new FileReader(file);
                BufferedReader bReader = new BufferedReader(fReader);
                
                aux1 = bReader.readLine(); 
                aux2 = bReader.readLine(); 
                aux3 = bReader.readLine(); 
                qtdProdutos = Integer.parseInt(bReader.readLine());
                
                bReader.close();
                
                // -------------------------------------
                // Cadastrar o Produto
                qtdProdutos += 1;
                
                file = new File("database/produtos/" + qtdProdutos + ".txt");
                file.createNewFile();
                
                FileWriter fWriter = new FileWriter(file);
                
                fWriter.write(cmpTitulo.getText() + "\n");
                fWriter.write(cmpArtista.getText() + "\n");
                fWriter.write(arDescricao.getText() + "\n");
                fWriter.write(cmpPreco.getText() + "\n");
                
                fWriter.close();
                
                // Atualizar a quantidade de produtos cadastrados
                file = new File("database/statusLoja.txt");
                fWriter = new FileWriter(file);
                
                fWriter.write(aux1 + "\n");
                fWriter.write(aux2 + "\n");
                fWriter.write(aux3 + "\n");
                fWriter.write(qtdProdutos + "\n");
                
                fWriter.close();
                
                // Apagar tudo que tem escrito
                cmpTitulo.setText("");
                cmpArtista.setText("");
                arDescricao.setText("");
                cmpPreco.setText("");
                
                JOptionPane.showMessageDialog(this, "Cadastro com sucesso!", 
                                            "Sucesso!", JOptionPane.PLAIN_MESSAGE);
                
            } catch(Exception e){}
           
            
            
            
        }
    }//GEN-LAST:event_btConfirmarActionPerformed

    
    
    
    
    
    
    
    
    
    
    
    // FUNCIONALIDADES DO BOTÃO "CANCELAR"
    ///////////////////////////////////
    private void btCancelarActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_btCancelarActionPerformed
        pai.setEnabled(true);
        this.dispose();
    }//GEN-LAST:event_btCancelarActionPerformed

    
    
    
    
    // FUNCIONALIDADES DO BOTÃO "LIMPAR"
    ///////////////////////////////////
    private void btLimparActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_btLimparActionPerformed
        cmpArtista.setText("");
        cmpTitulo.setText("");
        cmpPreco.setText("");
        arDescricao.setText("");
    }//GEN-LAST:event_btLimparActionPerformed


    
    
    
    
    
    
    
    ///////////////////////////////////
    public static void main(String args[]) {
        /* Set the Nimbus look and feel */
        //<editor-fold defaultstate="collapsed" desc=" Look and feel setting code (optional) ">
        /* If Nimbus (introduced in Java SE 6) is not available, stay with the default look and feel.
         * For details see http://download.oracle.com/javase/tutorial/uiswing/lookandfeel/plaf.html 
         */
        try {
            for (javax.swing.UIManager.LookAndFeelInfo info : javax.swing.UIManager.getInstalledLookAndFeels()) {
                if ("Nimbus".equals(info.getName())) {
                    javax.swing.UIManager.setLookAndFeel(info.getClassName());
                    break;
                }
            }
        } catch (ClassNotFoundException ex) {
            java.util.logging.Logger.getLogger(cadastrarProduto.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (InstantiationException ex) {
            java.util.logging.Logger.getLogger(cadastrarProduto.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (IllegalAccessException ex) {
            java.util.logging.Logger.getLogger(cadastrarProduto.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (javax.swing.UnsupportedLookAndFeelException ex) {
            java.util.logging.Logger.getLogger(cadastrarProduto.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        }
        //</editor-fold>

        /* Create and display the form */
        java.awt.EventQueue.invokeLater(new Runnable() {
            public void run() {
                new cadastrarProduto().setVisible(true);
            }
        });
    }

    // Variables declaration - do not modify//GEN-BEGIN:variables
    private javax.swing.JTextArea arDescricao;
    private javax.swing.JLabel artista;
    private javax.swing.JButton btCancelar;
    private javax.swing.JButton btConfirmar;
    private javax.swing.JButton btLimpar;
    private javax.swing.JTextField cmpArtista;
    private javax.swing.JTextField cmpPreco;
    private javax.swing.JTextField cmpTitulo;
    private javax.swing.JLabel descricao;
    private javax.swing.JScrollPane jScrollPane2;
    private javax.swing.JLabel preco;
    private javax.swing.JLabel titulo;
    private javax.swing.JLabel tituloJanela;
    // End of variables declaration//GEN-END:variables
}

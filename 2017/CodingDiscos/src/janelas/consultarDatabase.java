package janelas;
import javax.swing.JFrame;
import java.io.*;
import javax.swing.DefaultListModel;

public class consultarDatabase extends javax.swing.JFrame {

    public consultarDatabase() {
        initComponents();
    }

    @SuppressWarnings("unchecked")
    // <editor-fold defaultstate="collapsed" desc="Generated Code">//GEN-BEGIN:initComponents
    private void initComponents() {

        jScrollPane1 = new javax.swing.JScrollPane();
        lstProduto = new javax.swing.JList<>();
        produtos = new javax.swing.JLabel();
        tituloJanela = new javax.swing.JLabel();
        titulo = new javax.swing.JLabel();
        cmpTitulo = new javax.swing.JTextField();
        artista = new javax.swing.JLabel();
        descricao = new javax.swing.JLabel();
        preco = new javax.swing.JLabel();
        cmpArtista = new javax.swing.JTextField();
        jScrollPane2 = new javax.swing.JScrollPane();
        cmpDescricao = new javax.swing.JTextArea();
        cmpPreco = new javax.swing.JTextField();
        cmpCodigo = new javax.swing.JTextField();
        codigo = new javax.swing.JLabel();
        btVoltar = new javax.swing.JButton();

        setDefaultCloseOperation(javax.swing.WindowConstants.DO_NOTHING_ON_CLOSE);
        addWindowListener(new java.awt.event.WindowAdapter() {
            public void windowOpened(java.awt.event.WindowEvent evt) {
                formWindowOpened(evt);
            }
        });

        lstProduto.addListSelectionListener(new javax.swing.event.ListSelectionListener() {
            public void valueChanged(javax.swing.event.ListSelectionEvent evt) {
                lstProdutoValueChanged(evt);
            }
        });
        jScrollPane1.setViewportView(lstProduto);

        produtos.setFont(new java.awt.Font("Cantarell", 1, 15)); // NOI18N
        produtos.setText("Produtos");

        tituloJanela.setFont(new java.awt.Font("Cantarell", 1, 36)); // NOI18N
        tituloJanela.setText("Banco de Dados");

        titulo.setText("Título");

        cmpTitulo.setEditable(false);

        artista.setText("Artista");

        descricao.setText("Descrição");

        preco.setText("Preço (R$)");

        cmpArtista.setEditable(false);

        cmpDescricao.setEditable(false);
        cmpDescricao.setColumns(20);
        cmpDescricao.setRows(5);
        jScrollPane2.setViewportView(cmpDescricao);

        cmpPreco.setEditable(false);

        cmpCodigo.setEditable(false);

        codigo.setText("Código");

        btVoltar.setText("Voltar");
        btVoltar.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                btVoltarActionPerformed(evt);
            }
        });

        javax.swing.GroupLayout layout = new javax.swing.GroupLayout(getContentPane());
        getContentPane().setLayout(layout);
        layout.setHorizontalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(layout.createSequentialGroup()
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addGroup(layout.createSequentialGroup()
                        .addGap(127, 127, 127)
                        .addComponent(tituloJanela))
                    .addGroup(layout.createSequentialGroup()
                        .addGap(36, 36, 36)
                        .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING, false)
                            .addComponent(produtos, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                            .addComponent(jScrollPane1, javax.swing.GroupLayout.PREFERRED_SIZE, 64, javax.swing.GroupLayout.PREFERRED_SIZE))
                        .addGap(50, 50, 50)
                        .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                            .addGroup(javax.swing.GroupLayout.Alignment.TRAILING, layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING, false)
                                .addGroup(layout.createSequentialGroup()
                                    .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                                        .addGroup(layout.createSequentialGroup()
                                            .addGap(6, 6, 6)
                                            .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.TRAILING)
                                                .addComponent(artista)
                                                .addComponent(descricao)))
                                        .addComponent(codigo, javax.swing.GroupLayout.Alignment.TRAILING)
                                        .addComponent(titulo, javax.swing.GroupLayout.Alignment.TRAILING))
                                    .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                                    .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.TRAILING, false)
                                        .addComponent(cmpCodigo)
                                        .addComponent(cmpTitulo, javax.swing.GroupLayout.Alignment.LEADING)
                                        .addComponent(jScrollPane2, javax.swing.GroupLayout.Alignment.LEADING)
                                        .addComponent(cmpArtista, javax.swing.GroupLayout.Alignment.LEADING, javax.swing.GroupLayout.PREFERRED_SIZE, 262, javax.swing.GroupLayout.PREFERRED_SIZE)))
                                .addGroup(layout.createSequentialGroup()
                                    .addComponent(preco)
                                    .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                                    .addComponent(cmpPreco, javax.swing.GroupLayout.PREFERRED_SIZE, 267, javax.swing.GroupLayout.PREFERRED_SIZE)))
                            .addGroup(javax.swing.GroupLayout.Alignment.TRAILING, layout.createSequentialGroup()
                                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED, 259, javax.swing.GroupLayout.PREFERRED_SIZE)
                                .addComponent(btVoltar, javax.swing.GroupLayout.PREFERRED_SIZE, 90, javax.swing.GroupLayout.PREFERRED_SIZE)))))
                .addContainerGap(67, Short.MAX_VALUE))
        );
        layout.setVerticalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(javax.swing.GroupLayout.Alignment.TRAILING, layout.createSequentialGroup()
                .addContainerGap()
                .addComponent(tituloJanela)
                .addGap(18, 18, 18)
                .addComponent(produtos)
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addComponent(jScrollPane1, javax.swing.GroupLayout.PREFERRED_SIZE, 290, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addGroup(layout.createSequentialGroup()
                        .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                            .addComponent(cmpCodigo, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                            .addComponent(codigo))
                        .addGap(18, 18, 18)
                        .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                            .addComponent(cmpTitulo, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                            .addComponent(titulo))
                        .addGap(18, 18, 18)
                        .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                            .addComponent(artista)
                            .addComponent(cmpArtista, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE))
                        .addGap(18, 18, 18)
                        .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                            .addComponent(descricao)
                            .addComponent(jScrollPane2, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE))
                        .addGap(18, 18, 18)
                        .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)
                            .addComponent(preco)
                            .addComponent(cmpPreco, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE))
                        .addGap(18, 18, 18)
                        .addComponent(btVoltar)))
                .addContainerGap(42, Short.MAX_VALUE))
        );

        pack();
    }// </editor-fold>//GEN-END:initComponents
    ///////////////////////////////////

    // Variáveis para se Conectar com a Janela Anterior
    JFrame pai;
    public consultarDatabase(JFrame anterior){
        this();
        pai = anterior;
    }
    
    
    
    
    // FUNCIONALIDADES DA LISTA DE PRODUTOS
    ///////////////////////////////////
    private void lstProdutoValueChanged(javax.swing.event.ListSelectionEvent evt) {//GEN-FIRST:event_lstProdutoValueChanged
        String codigo = lstProduto.getSelectedValue();
        cmpCodigo.setText(codigo);
        
        try {
            File file = new File("database/produtos/" + codigo + ".txt");
            FileReader fReader = new FileReader(file);
            BufferedReader bReader = new BufferedReader(fReader);
            
            cmpTitulo.setText(bReader.readLine());
            cmpArtista.setText(bReader.readLine());
            cmpDescricao.setText(bReader.readLine());
            cmpPreco.setText(bReader.readLine());
            
        } catch(Exception e){}
        
        
    }//GEN-LAST:event_lstProdutoValueChanged
    
    
    
    
    // FUNCIONALIDADES DO BOTÃO "VOLTAR"
    ///////////////////////////////////
    private void btVoltarActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_btVoltarActionPerformed
        pai.setEnabled(true);
        this.dispose();
    }//GEN-LAST:event_btVoltarActionPerformed

    
    
    
    
    
    
    
    // FUNCIONALIDADES QUANDO A JANELA É ABERTA
    ////////////////////////////////////////////
    private void formWindowOpened(java.awt.event.WindowEvent evt) {//GEN-FIRST:event_formWindowOpened
        int qtdProdutos = 0;
        try{
            File file = new File("database/statusLoja.txt");
            FileReader fReader = new FileReader(file);
            BufferedReader bReader = new BufferedReader(fReader);
            
            bReader.readLine(); bReader.readLine(); bReader.readLine();
            qtdProdutos = Integer.parseInt(bReader.readLine());
            
        } catch(Exception e){}
        
        // Adicionando os Elementos na Lista
        DefaultListModel listModel = new DefaultListModel();
        
        for(int i = 1; i <= qtdProdutos; i++) {
            listModel.addElement(Integer.toString(i));
        }
        
        lstProduto.setModel(listModel);
    }//GEN-LAST:event_formWindowOpened

    
    
    
    
    
    
    
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
            java.util.logging.Logger.getLogger(consultarDatabase.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (InstantiationException ex) {
            java.util.logging.Logger.getLogger(consultarDatabase.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (IllegalAccessException ex) {
            java.util.logging.Logger.getLogger(consultarDatabase.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (javax.swing.UnsupportedLookAndFeelException ex) {
            java.util.logging.Logger.getLogger(consultarDatabase.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        }
        //</editor-fold>

        /* Create and display the form */
        java.awt.EventQueue.invokeLater(new Runnable() {
            public void run() {
                new consultarDatabase().setVisible(true);
            }
        });
    }

    // Variables declaration - do not modify//GEN-BEGIN:variables
    private javax.swing.JLabel artista;
    private javax.swing.JButton btVoltar;
    private javax.swing.JTextField cmpArtista;
    private javax.swing.JTextField cmpCodigo;
    private javax.swing.JTextArea cmpDescricao;
    private javax.swing.JTextField cmpPreco;
    private javax.swing.JTextField cmpTitulo;
    private javax.swing.JLabel codigo;
    private javax.swing.JLabel descricao;
    private javax.swing.JScrollPane jScrollPane1;
    private javax.swing.JScrollPane jScrollPane2;
    private javax.swing.JList<String> lstProduto;
    private javax.swing.JLabel preco;
    private javax.swing.JLabel produtos;
    private javax.swing.JLabel titulo;
    private javax.swing.JLabel tituloJanela;
    // End of variables declaration//GEN-END:variables
}

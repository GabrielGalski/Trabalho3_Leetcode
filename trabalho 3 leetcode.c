/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


//fazer uma leitura da arvore com recursão e achar a menor subarvore e imprimir
struct TreeNode* subtreeWithAllDeepest(struct TreeNode* root) {
    //conferir se a raiz não é nula 
      if(root == NULL) {
        return NULL;
      }
      //recursão e conferir se é a menor subarvore
      
       return subtreeWithAllDeepest(root->left);
       return subtreeWithAllDeepest(root->right);
       
       //retornar a menor subavore
       if(){
        return root;
       }
    }    
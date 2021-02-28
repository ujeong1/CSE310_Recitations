#define	CAT_NAME_LEN	25
#define	APP_NAME_LEN	50
#define	VERSION_LEN	10
#define	UNIT_SIZE	3

struct app_info{
	char category[ CAT_NAME_LEN ]; // Name of category
	char app_name[ APP_NAME_LEN ]; // Name of the application
	char version[ VERSION_LEN ]; // Version number
	float size; // Size of the application
	char units[ UNIT_SIZE ]; // GB or MB
	float price; // Price in $ of the application
};

struct bst{ // A binary search tree
    struct app_info record; // Information about the application
    struct bst *left;  // Pointer to the left subtree
    struct bst *right;  // Pointer to the right subtree
};

struct categories{
    char category[ CAT_NAME_LEN ]; // Name of category
    struct bst *root;  // Pointer to root of search tree for this category
};

struct hash_table_entry{
   char app_name[ APP_NAME_LEN ]; // Name of the application
   struct bst *app_node; // Pointer to node in BST containing the application information
   struct hash_table_entry *next; // Next pointer for chain in separate chaining
};

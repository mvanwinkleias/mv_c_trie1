#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdint.h>

#ifndef lib_mv_trie_ipv4_1__
#define lib_mv_trie_ipv4_1__

typedef uint32_t binary_tree_node_base_type ;
int binary_tree_node_base_type_size = sizeof(binary_tree_node_base_type);
int binary_tree_node_base_type_num_bits = sizeof(binary_tree_node_base_type) * 8;

typedef struct binary_tree_node
{
	struct binary_tree_node *parent;

	struct binary_tree_node *children[2];

	bool is_end_of_word;
} binary_tree_node;

int binary_tree_node_init(binary_tree_node * new_node);

binary_tree_node *binary_tree_node_create();


void binary_tree_node_destroy( binary_tree_node *root);

binary_tree_node *binary_tree_node_insert(
	binary_tree_node *root,
	binary_tree_node_base_type value,
	int remaining_bits
);


binary_tree_node *binary_tree_node_insert_base_type(
	binary_tree_node *root,
	binary_tree_node_base_type value
);

bool binary_tree_node_search(
	binary_tree_node *root,
	binary_tree_node_base_type search_value,
	int remaining_bits
);

bool binary_tree_node_search_base_type(
	binary_tree_node *root,
	binary_tree_node_base_type search_value
);


#endif // lib_mv_trie_ipv4_1__

// Compile this with:
//
// gcc -c -Wall -Werror -fpic hello_ias.c
// gcc -shared -o libhello_ias.so hello_ias.o

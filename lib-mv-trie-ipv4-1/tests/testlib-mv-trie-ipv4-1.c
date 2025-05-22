#include <config.h>
#include <stdio.h>

#include "lib-mv-trie-ipv4-1.h"

int main ()
{
	binary_tree_node *root = binary_tree_node_create();

	binary_tree_node_insert_base_type(root, 0b101);
	binary_tree_node_insert_base_type(root, 0b011);
	binary_tree_node_insert_base_type(root, 0b110);

	printf(
		"Search '101': %s\n",
		binary_tree_node_search_base_type(root, 0b101)
			? "Found" : "Not found"
	);

	printf(
		"Search '010': %s\n",
		binary_tree_node_search_base_type(root, 0b010)
			? "Found" : "Not found"
	);

	printf(
		"Search '110': %s\n",
		binary_tree_node_search_base_type(root, 0b110)
			? "Found" : "Not found"
	);

	binary_tree_node_destroy(root);
	return 0;
}

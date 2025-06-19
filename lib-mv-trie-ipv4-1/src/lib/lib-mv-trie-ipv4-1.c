#include "lib-mv-trie-ipv4-1.h"

int binary_tree_node_init(binary_tree_node * new_node)
{

	if (new_node)
	{
		new_node->children[0] = NULL;
		new_node->children[0] = NULL;

		new_node->is_end_of_word = false;
	}
}

binary_tree_node *binary_tree_node_create()
{
	binary_tree_node *new_node = (binary_tree_node *)malloc(sizeof(binary_tree_node));

	binary_tree_node_init(new_node);

	return new_node;
}


void binary_tree_node_destroy( binary_tree_node *root)
{
	if (root)
	{
		binary_tree_node_destroy(root->children[0]);
		binary_tree_node_destroy(root->children[1]);
		free(root);
	}

}

binary_tree_node *binary_tree_node_insert(
	binary_tree_node *root,
	binary_tree_node_base_type value,
	int remaining_bits
)
{
	binary_tree_node *current = root;

	for (
		int bit_counter = remaining_bits - 1;
		bit_counter >= 0;
		bit_counter--
	)
	{
		int index = (value >> bit_counter) & 1;

		if (!current->children[index])
		{
			current->children[index] = binary_tree_node_create();
			current->children[index]->parent = root;
		}
		current = current->children[index];
	}

	current->is_end_of_word = true;
}


binary_tree_node *binary_tree_node_insert_base_type(
	binary_tree_node *root,
	binary_tree_node_base_type value
)
{
	return binary_tree_node_insert(
		root,
		value,
		binary_tree_node_base_type_num_bits
	);

}

bool binary_tree_node_search(
	binary_tree_node *root,
	binary_tree_node_base_type search_value,
	int remaining_bits
)
{
	binary_tree_node *current = root;
	for (
		int bit_counter = remaining_bits -1;
		bit_counter >= 0;
		bit_counter --
	)
	{
		int index = (search_value >> bit_counter) & 1;
		if (!current->children[index])
		{
			return false;
		}
		current = current->children[index];
	}

	return current->is_end_of_word;
}

bool binary_tree_node_search_base_type(
	binary_tree_node *root,
	binary_tree_node_base_type search_value
)
{
	return binary_tree_node_search(
		root,
		search_value,
		binary_tree_node_base_type_num_bits
	);
}


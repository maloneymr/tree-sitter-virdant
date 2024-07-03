package tree_sitter_virdant_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-virdant"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_virdant.Language())
	if language == nil {
		t.Errorf("Error loading Virdant grammar")
	}
}

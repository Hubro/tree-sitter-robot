package tree_sitter_robot_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_robot "github.com/hubro/tree-sitter-robot/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_robot.Language())
	if language == nil {
		t.Errorf("Error loading Robot grammar")
	}
}

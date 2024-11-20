{pkgs, ...}: {
  packages = [pkgs.tree-sitter];

  languages.javascript.enable = true;
}

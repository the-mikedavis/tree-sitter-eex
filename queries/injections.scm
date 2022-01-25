((directive (expression) @injection.content)
 (#set! injection.language "elixir"))


((directive_group (directive (partial_expression) @injection.content))
 (#set! injection.combined)
 (#set! injection.include-children)
 (#set! injection.language "elixir"))

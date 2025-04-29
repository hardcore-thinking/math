add_rules("mode.debug", "mode.release", "mode.coverage")
set_warnings("all", "error")
set_languages("c++20")
set_optimize("fastest")

add_rules("plugin.vsxmake.autoupdate")
add_rules("plugin.compile_commands.autoupdate", {outputdir = ".vscode"})
target("matrix")
    set_kind("binary")
    
    add_includedirs("inc")
    
    add_files("src/*.cpp")
    add_headerfiles("inc/*.hpp")

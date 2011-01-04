// Auto generated file from toolbar.ini

const char * TOOLBAR_INI = 	"# Xournal++ Toolbar configuration\n"
	"# Here you can customize the Toolbars\n"
	"# Delte this file to generate a new config file with default values\n"
	"\n"
	"# Available buttons:\n"
	"# File: NEW,SAVE,OPEN\n"
	"#\n"
	"# Edit: CUT,COPY,PASTE,SEARCH,UNDO,REDO,INSERT_NEW_PAGE\n"
	"#\n"
	"# Navigation: GOTO_FIRST,GOTO_BACK,GOTO_NEXT,GOTO_LAST,GOTO_NEXT_ANNOTATED_PAGE\n"
	"#\n"
	"# Zoom: ZOOM_OUT,ZOOM_IN,ZOOM_FIT,ZOOM_100,FULLSCREEN,TWO_PAGES\n"
	"#\n"
	"# Color: COLOR(0xffffff),COLOR(0xffff00),COLOR(0xff8000),COLOR(0xff00ff),COLOR(0x00ff00),COLOR(0x00c0ff),COLOR(0x808080),COLOR(0x008000),COLOR(0xff0000),COLOR(0x3333cc),COLOR(0x000000),COLOR_SELECT\n"
	"#  Notice: This are the default Xournal colors, each other color in HEX can also be used, eg COLOR(0x12ABCF);\n"
	"#\n"
	"# Tools: ERASER,PEN,HILIGHTER,TEXT,IMAGE,SELECT,SELECT_REGION,SELECT_RECTANGLE,VERTICAL_SPACE,HAND\n"
	"#  Notice: ERASER also has a drop down menu to select the eraser type, SELECT are all selection tools, with drop down menu\n"
	"#\n"
	"# Tool settings: SHAPE_RECOGNIZER,RULER,FINE,MEDIUM,THICK,SELECT_FONT\n"
	"#\n"
	"# Components: PAGE_SPIN,ZOOM_SLIDER,LAYER\n"
	"#  PAGE_SPIN: The page spiner, incl. current page label\n"
	"#  ZOOM_SLIDER: The zoom slider\n"
	"#  LAYER: The layer dropdown menu\n"
	"#\n"
	"\n"
	"\n"
	"[general]\n"
	"# if this value is true the file will be updated if you start another (newer or older) Version of Xournal++\n"
	"# if you customize the file set this value to \"false\" you may have to adapt it for a new version\n"
	"autoupdate = true\n"
	"version = 0.1\n"
	"\n"
	"# Portrait: The name in breakets have to be uniq, but is not displayed\n"
	"[Portrait]\n"
	"# The name of the toolbar, wich is display in the menu, can be localized\n"
	"name = Portrait\n"
	"# Translated names\n"
	"name[de] = Hochformat\n"
	"toolbarTop1 = SAVE,NEW,OPEN,INSERT_NEW_PAGE,SEPARATOR, CUT,COPY,PASTE,SEPARATOR, UNDO,REDO,SEPARATOR, GOTO_FIRST,GOTO_BACK,GOTO_NEXT_ANNOTATED_PAGE,GOTO_NEXT,GOTO_LAST,SEPARATOR ,FULLSCREEN, SEPARATOR, SELECT_FONT\n"
	"toolbarTop2 = PEN,ERASER,HILIGHTER,TEXT,SHAPE_RECOGNIZER,RULER,SEPARATOR, SELECT,VERTICAL_SPACE,HAND,SEPARATOR, FINE,MEDIUM,THICK,SEPARATOR ,COLOR(0xffffff),COLOR(0xffff00),COLOR(0xff8000),COLOR(0xff00ff),COLOR(0x00ff00),COLOR(0x00c0ff),COLOR(0x808080),COLOR(0x008000),COLOR(0xff0000),COLOR(0x3333cc),COLOR(0x000000),COLOR_SELECT\n"
	"toolbarBottom1 = PAGE_SPIN,SEPARATOR,LAYER, SPACER, TWO_PAGES,ZOOM_100,ZOOM_FIT,ZOOM_OUT,ZOOM_SLIDER,ZOOM_IN\n"
	"\n"
	"[Xournal++]\n"
	"name = Xournal++\n"
	"name[de] = Xournal++\n"
	"toolbarTop1 = SAVE,NEW,OPEN,INSERT_NEW_PAGE,SEPARATOR, CUT,COPY,PASTE,SEPARATOR, UNDO,REDO,SEPARATOR, PEN,ERASER,HILIGHTER,TEXT,SHAPE_RECOGNIZER,RULER,SEPARATOR, SELECT,VERTICAL_SPACE,HAND,SEPARATOR, FINE,MEDIUM,THICK,SEPARATOR ,COLOR(0xffffff),COLOR(0xffff00),COLOR(0xff8000),COLOR(0xff00ff),COLOR(0x00ff00),COLOR(0x00c0ff),COLOR(0x808080),COLOR(0x008000),COLOR(0xff0000),COLOR(0x3333cc),COLOR(0x000000),COLOR_SELECT, SEPARATOR, SELECT_FONT\n"
	"toolbarBottom1 = PAGE_SPIN,SEPARATOR,LAYER,GOTO_FIRST,GOTO_NEXT_ANNOTATED_PAGE,GOTO_LAST,SPACER, TWO_PAGES,ZOOM_100,ZOOM_FIT,ZOOM_OUT,ZOOM_SLIDER,ZOOM_IN,SEPARATOR, FULLSCREEN\n"
	"\n"
	"[Toolbar Left]\n"
	"name = Toolbar Left\n"
	"name[de] = Toolbar Links\n"
	"toolbarTop1 = SAVE,NEW,OPEN,INSERT_NEW_PAGE,SEPARATOR, CUT,COPY,PASTE,SEPARATOR, UNDO,REDO,SEPARATOR, PEN,ERASER,HILIGHTER,TEXT,SHAPE_RECOGNIZER,RULER,SEPARATOR, SELECT,VERTICAL_SPACE,HAND,SEPARATOR, PAGE_SPIN,SEPARATOR, GOTO_FIRST,GOTO_NEXT_ANNOTATED_PAGE,GOTO_LAST,SEPARATOR, LAYER,FULLSCREEN\n"
	"# Second toolbar on top\n"
	"toolbarLeft1 = COLOR(0xffffff),COLOR(0xffff00),COLOR(0xff8000),COLOR(0xff00ff),COLOR(0x00ff00),COLOR(0x00c0ff),COLOR(0x808080),COLOR(0x008000),COLOR(0xff0000),COLOR(0x3333cc),COLOR(0x000000),COLOR_SELECT,SEPARATOR, FINE,MEDIUM,THICK, SEPARATOR,TWO_PAGES,ZOOM_100,ZOOM_FIT,ZOOM_OUT,ZOOM_SLIDER,ZOOM_IN\n"
	"\n"
	"\n"
	"[Toolbar Right]\n"
	"name = Toolbar Right\n"
	"name[de] = Toolbar Rechts\n"
	"toolbarTop1 = SAVE,NEW,OPEN,INSERT_NEW_PAGE,SEPARATOR, CUT,COPY,PASTE,SEPARATOR, UNDO,REDO,SEPARATOR, PEN,ERASER,HILIGHTER,TEXT,SHAPE_RECOGNIZER,RULER,SEPARATOR, SELECT,VERTICAL_SPACE,HAND,SEPARATOR, PAGE_SPIN,SEPARATOR, GOTO_FIRST,GOTO_NEXT_ANNOTATED_PAGE,GOTO_LAST,SEPARATOR, LAYER,FULLSCREEN\n"
	"# Second toolbar on top\n"
	"toolbarRight1 = COLOR(0xffffff),COLOR(0xffff00),COLOR(0xff8000),COLOR(0xff00ff),COLOR(0x00ff00),COLOR(0x00c0ff),COLOR(0x808080),COLOR(0x008000),COLOR(0xff0000),COLOR(0x3333cc),COLOR(0x000000),COLOR_SELECT,SEPARATOR, FINE,MEDIUM,THICK, SEPARATOR,TWO_PAGES,ZOOM_100,ZOOM_FIT,ZOOM_OUT,ZOOM_SLIDER,ZOOM_IN\n"
	"\n"
;

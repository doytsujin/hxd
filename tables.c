struct Style {
	char *esc1, *esc2;
} styles[256] = {
#define _C { "\x1b[34m",   "\x1b[34m" } /* ctrl chars */
	[0]   = { "\x1b[30m",   "\x1b[37m" }, /* NUL */
	[1]   = _C, [2]   = _C, [3]   = _C, [4]   = _C, [5]   = _C,
	[6]   = _C, [7]   = _C, [8]   = _C,
	[9]   = { "\x1b[1;35m", "\x1b[35m" }, /* TAB */
	[10]  = { "\x1b[1;30m", "\x1b[1m"  }, /*  LF */
	[11]  = _C, [12]  = _C, [13]  = _C, [14]  = _C, [15]  = _C,
	[16]  = _C, [17]  = _C, [18]  = _C, [19]  = _C, [20]  = _C,
	[21]  = _C, [22]  = _C, [23]  = _C, [24]  = _C, [25]  = _C,
	[26]  = _C, [27]  = _C, [28]  = _C, [29]  = _C, [30]  = _C,
	[31]  = _C,
	[127] = { "\x1b[1;31m", "\x1b[31m" }, /* DEL */
	[128] = _C, [129] = _C, [130] = _C, [131] = _C, [132] = _C,
	[133] = _C, [134] = _C, [135] = _C, [136] = _C, [137] = _C,
	[138] = _C, [139] = _C, [140] = _C, [141] = _C, [142] = _C,
	[143] = _C, [144] = _C, [145] = _C, [146] = _C, [147] = _C,
	[148] = _C, [149] = _C, [150] = _C, [151] = _C, [152] = _C,
	[153] = _C, [154] = _C, [155] = _C, [156] = _C, [157] = _C,
	[158] = _C, [159] = _C, [160] = _C, [161] = _C, [162] = _C,
	[163] = _C, [164] = _C, [165] = _C, [166] = _C, [167] = _C,
	[168] = _C, [169] = _C, [170] = _C, [171] = _C, [172] = _C,
	[173] = _C, [174] = _C, [175] = _C, [176] = _C, [177] = _C,
	[178] = _C, [179] = _C, [180] = _C, [181] = _C, [182] = _C,
	[183] = _C, [184] = _C, [185] = _C, [186] = _C, [187] = _C,
	[188] = _C, [189] = _C, [190] = _C, [191] = _C, [192] = _C,
	[193] = _C, [194] = _C, [195] = _C, [196] = _C, [197] = _C,
	[198] = _C, [199] = _C, [200] = _C, [201] = _C, [202] = _C,
	[203] = _C, [204] = _C, [205] = _C, [206] = _C, [207] = _C,
	[208] = _C, [209] = _C, [210] = _C, [211] = _C, [212] = _C,
	[213] = _C, [214] = _C, [215] = _C, [216] = _C, [217] = _C,
	[218] = _C, [219] = _C, [220] = _C, [221] = _C, [222] = _C,
	[223] = _C, [224] = _C, [225] = _C, [226] = _C, [227] = _C,
	[228] = _C, [229] = _C, [230] = _C, [231] = _C, [232] = _C,
	[233] = _C, [234] = _C, [235] = _C, [236] = _C, [237] = _C,
	[238] = _C, [239] = _C, [240] = _C, [241] = _C, [242] = _C,
	[243] = _C, [244] = _C, [245] = _C, [246] = _C, [247] = _C,
	[248] = _C, [249] = _C, [250] = _C, [251] = _C, [252] = _C,
	[253] = _C, [254] = _C, [255] = _C,
#undef _C
};

/* Character for space was ␠, changed back to ' ' for
 * readability */
static char *t_cntrls[] = {
	[0  ] = "␀", [1  ] = "␁", [2  ] = "␂", [3  ] = "␃",
	[4  ] = "␄", [5  ] = "␅", [6  ] = "␆", [7  ] = "␇",
	[8  ] = "␈", [9  ] = "␉", [10 ] = "␊", [11 ] = "␋",
	[12 ] = "␌", [13 ] = "·", [14 ] = "␎", [15 ] = "␏",
	[16 ] = "␐", [17 ] = "␑", [18 ] = "␒", [19 ] = "␓",
	[20 ] = "␔", [21 ] = "␕", [22 ] = "␖", [23 ] = "␗",
	[24 ] = "␘", [25 ] = "␙", [26 ] = "␚", [27 ] = "␛",
	[28 ] = "␜", [29 ] = "␝", [30 ] = "␞", [31 ] = "␟",
	[32 ] = " ", [127] = "␡"
};

static char *t_cp437[] = {
	[0  ] = "␀", [1  ] = "☺", [2  ] = "☻", [3  ] = "♥", [4  ] = "♦",
	[5  ] = "♣", [6  ] = "♠", [7  ] = "•", [8  ] = "◛", [9  ] = "○",
	[10 ] = "◙", [11 ] = "♂", [12 ] = "♀", [13 ] = "♪", [14 ] = "♫",
	[15 ] = "☼", [16 ] = "►", [17 ] = "◄", [18 ] = "↕", [19 ] = "‼",
	[20 ] = "¶", [21 ] = "§", [22 ] = "▬", [23 ] = "↨", [24 ] = "↑",
	[25 ] = "↓", [26 ] = "→", [27 ] = "←", [28 ] = "∟", [29 ] = "↔",
	[30 ] = "▲", [31 ] = "▼", [32 ] = " ", [33 ] = "!", [34 ] = "\"",
	[35 ] = "#", [36 ] = "$", [37 ] = "%", [38 ] = "&", [39 ] = "'",
	[40 ] = "(", [41 ] = ")", [42 ] = "*", [43 ] = "+", [44 ] = ",",
	[45 ] = "-", [46 ] = ".", [47 ] = "/", [48 ] = "0", [49 ] = "1",
	[50 ] = "2", [51 ] = "3", [52 ] = "4", [53 ] = "5", [54 ] = "6",
	[55 ] = "7", [56 ] = "8", [57 ] = "9", [58 ] = ":", [59 ] = ";",
	[60 ] = "<", [61 ] = "=", [62 ] = ">", [63 ] = "?", [64 ] = "@",
	[65 ] = "A", [66 ] = "B", [67 ] = "C", [68 ] = "D", [69 ] = "E",
	[70 ] = "F", [71 ] = "G", [72 ] = "H", [73 ] = "I", [74 ] = "J",
	[75 ] = "K", [76 ] = "L", [77 ] = "M", [78 ] = "N", [79 ] = "O",
	[80 ] = "P", [81 ] = "Q", [82 ] = "R", [83 ] = "S", [84 ] = "T",
	[85 ] = "U", [86 ] = "V", [87 ] = "W", [88 ] = "X", [89 ] = "Y",
	[90 ] = "Z", [91 ] = "[", [92 ] = "\\", [93 ] = "]", [94 ] = "^",
	[95 ] = "_", [96 ] = "`", [97 ] = "a", [98 ] = "b", [99 ] = "c",
	[100] = "d", [101] = "e", [102] = "f", [103] = "g", [104] = "h",
	[105] = "i", [106] = "j", [107] = "k", [108] = "l", [109] = "m",
	[110] = "n", [111] = "o", [112] = "p", [113] = "q", [114] = "r",
	[115] = "s", [116] = "t", [117] = "u", [118] = "v", [119] = "w",
	[120] = "x", [121] = "y", [122] = "z", [123] = "{", [124] = "|",
	[125] = "}", [126] = "~", [127] = "⌂", [128] = "Ç", [129] = "ü",
	[130] = "é", [131] = "â", [132] = "ä", [133] = "à", [134] = "å",
	[135] = "ç", [136] = "ê", [137] = "ë", [138] = "è", [139] = "ï",
	[140] = "î", [141] = "ì", [142] = "Ä", [143] = "Å", [144] = "É",
	[145] = "æ", [146] = "Æ", [147] = "ô", [148] = "ö", [149] = "ò",
	[150] = "û", [151] = "ù", [152] = "ÿ", [153] = "Ö", [154] = "Ü",
	[155] = "¢", [156] = "£", [157] = "¥", [158] = "₧", [159] = "ƒ",
	[160] = "á", [161] = "í", [162] = "ó", [163] = "ú", [164] = "ñ",
	[165] = "Ñ", [166] = "ª", [167] = "º", [168] = "¿", [169] = "⌐",
	[170] = "¬", [171] = "½", [172] = "¼", [173] = "¡", [174] = "«",
	[175] = "»", [176] = "░", [177] = "▒", [178] = "▓", [179] = "│",
	[180] = "┤", [181] = "╡", [182] = "╢", [183] = "╖", [184] = "╕",
	[185] = "╣", [186] = "║", [187] = "╗", [188] = "╝", [189] = "╜",
	[190] = "╛", [191] = "┐", [192] = "└", [193] = "┴", [194] = "┬",
	[195] = "├", [196] = "─", [197] = "┼", [198] = "╞", [199] = "╟",
	[200] = "╚", [201] = "╔", [202] = "╩", [203] = "╦", [204] = "╠",
	[205] = "═", [206] = "╬", [207] = "╧", [208] = "╨", [209] = "╤",
	[210] = "╥", [211] = "╙", [212] = "╘", [213] = "╒", [214] = "╓",
	[215] = "╫", [216] = "╪", [217] = "┘", [218] = "┌", [219] = "█",
	[220] = "▄", [221] = "▌", [222] = "▐", [223] = "▀", [224] = "α",
	[225] = "ß", [226] = "Γ", [227] = "π", [228] = "Σ", [229] = "σ",
	[230] = "µ", [231] = "τ", [232] = "Φ", [233] = "Θ", [234] = "Ω",
	[235] = "δ", [236] = "∞", [237] = "φ", [238] = "ε", [239] = "∩",
	[240] = "≡", [241] = "±", [242] = "≥", [243] = "≤", [244] = "⌠",
	[245] = "⌡", [246] = "÷", [247] = "≈", [248] = "°", [249] = "∙",
	[250] = "·", [251] = "√", [252] = "ⁿ", [253] = "²", [254] = "■",
	[255] = "□"
};

static char *t_default[] = {
	[0  ] = "0", [1  ] = "·", [2  ] = "·", [3  ] = "·", [4  ] = "·",
	[5  ] = "·", [6  ] = "·", [7  ] = "·", [8  ] = "·", [9  ] = "»",
	[10 ] = "_", [11 ] = "·", [12 ] = "·", [13 ] = "·", [14 ] = "·",
	[15 ] = "·", [16 ] = "·", [17 ] = "·", [18 ] = "·", [19 ] = "·",
	[20 ] = "·", [21 ] = "·", [22 ] = "·", [23 ] = "·", [24 ] = "·",
	[25 ] = "·", [26 ] = "·", [27 ] = "·", [28 ] = "·", [29 ] = "·",
	[30 ] = "·", [31 ] = "·", [32 ] = " ", [33 ] = "!", [34 ] = "\"",
	[35 ] = "#", [36 ] = "$", [37 ] = "%", [38 ] = "&", [39 ] = "'",
	[40 ] = "(", [41 ] = ")", [42 ] = "*", [43 ] = "+", [44 ] = ",",
	[45 ] = "-", [46 ] = ".", [47 ] = "/", [48 ] = "0", [49 ] = "1",
	[50 ] = "2", [51 ] = "3", [52 ] = "4", [53 ] = "5", [54 ] = "6",
	[55 ] = "7", [56 ] = "8", [57 ] = "9", [58 ] = ":", [59 ] = ";",
	[60 ] = "<", [61 ] = "=", [62 ] = ">", [63 ] = "?", [64 ] = "@",
	[65 ] = "A", [66 ] = "B", [67 ] = "C", [68 ] = "D", [69 ] = "E",
	[70 ] = "F", [71 ] = "G", [72 ] = "H", [73 ] = "I", [74 ] = "J",
	[75 ] = "K", [76 ] = "L", [77 ] = "M", [78 ] = "N", [79 ] = "O",
	[80 ] = "P", [81 ] = "Q", [82 ] = "R", [83 ] = "S", [84 ] = "T",
	[85 ] = "U", [86 ] = "V", [87 ] = "W", [88 ] = "X", [89 ] = "Y",
	[90 ] = "Z", [91 ] = "[", [92 ] = "\\", [93 ] = "]", [94 ] = "^",
	[95 ] = "_", [96 ] = "`", [97 ] = "a", [98 ] = "b", [99 ] = "c",
	[100] = "d", [101] = "e", [102] = "f", [103] = "g", [104] = "h",
	[105] = "i", [106] = "j", [107] = "k", [108] = "l", [109] = "m",
	[110] = "n", [111] = "o", [112] = "p", [113] = "q", [114] = "r",
	[115] = "s", [116] = "t", [117] = "u", [118] = "v", [119] = "w",
	[120] = "x", [121] = "y", [122] = "z", [123] = "{", [124] = "|",
	[125] = "}", [126] = "~", [127] = "«", [128] = "·", [129] = "·",
	[130] = "·", [131] = "·", [132] = "·", [133] = "·", [134] = "·",
	[135] = "·", [136] = "·", [137] = "·", [138] = "·", [139] = "·",
	[140] = "·", [141] = "·", [142] = "·", [143] = "·", [144] = "·",
	[145] = "·", [146] = "·", [147] = "·", [148] = "·", [149] = "·",
	[150] = "·", [151] = "·", [152] = "·", [153] = "·", [154] = "·",
	[155] = "·", [156] = "·", [157] = "·", [158] = "·", [159] = "·",
	[160] = "·", [161] = "·", [162] = "·", [163] = "·", [164] = "·",
	[165] = "·", [166] = "·", [167] = "·", [168] = "·", [169] = "·",
	[170] = "·", [171] = "·", [172] = "·", [173] = "·", [174] = "·",
	[175] = "·", [176] = "·", [177] = "·", [178] = "·", [179] = "·",
	[180] = "·", [181] = "·", [182] = "·", [183] = "·", [184] = "·",
	[185] = "·", [186] = "·", [187] = "·", [188] = "·", [189] = "·",
	[190] = "·", [191] = "·", [192] = "·", [193] = "·", [194] = "·",
	[195] = "·", [196] = "·", [197] = "·", [198] = "·", [199] = "·",
	[200] = "·", [201] = "·", [202] = "·", [203] = "·", [204] = "·",
	[205] = "·", [206] = "·", [207] = "·", [208] = "·", [209] = "·",
	[210] = "·", [211] = "·", [212] = "·", [213] = "·", [214] = "·",
	[215] = "·", [216] = "·", [217] = "·", [218] = "·", [219] = "·",
	[220] = "·", [221] = "·", [222] = "·", [223] = "·", [224] = "·",
	[225] = "·", [226] = "·", [227] = "·", [228] = "·", [229] = "·",
	[230] = "·", [231] = "·", [232] = "·", [233] = "·", [234] = "·",
	[235] = "·", [236] = "·", [237] = "·", [238] = "·", [239] = "·",
	[240] = "·", [241] = "·", [242] = "·", [243] = "·", [244] = "·",
	[245] = "·", [246] = "·", [247] = "·", [248] = "·", [249] = "·",
	[250] = "·", [251] = "·", [252] = "·", [253] = "·", [254] = "·",
	[255] = "·"
};

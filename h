
[1mFrom:[0m /home/amiable-semicolon-3824/programming_languages-houston-web-career-021819/programming_languages.rb @ line 27 Object#reformat_languages:

     [1;34m3[0m: [32mdef[0m [1;34mreformat_languages[0m(languages)
     [1;34m4[0m:   new_hash = {}
     [1;34m5[0m:   languages.each [32mdo[0m |style, langs|
     [1;34m6[0m:     langs.each [32mdo[0m |name, type|
     [1;34m7[0m:       new_hash[name] = type
     [1;34m8[0m:     [32mend[0m
     [1;34m9[0m:   [32mend[0m
    [1;34m10[0m:   new_hash.each [32mdo[0m |name, type|
    [1;34m11[0m:     new_hash[name][[33m:style[0m] = []
    [1;34m12[0m:   [32mend[0m
    [1;34m13[0m: 
    [1;34m14[0m:   new_hash.each [32mdo[0m |name, type|
    [1;34m15[0m:     [32mif[0m languages[[33m:oo[0m].include?(name)
    [1;34m16[0m:       new_hash[name][[33m:style[0m] << [33m:oo[0m
    [1;34m17[0m:     [32mend[0m
    [1;34m18[0m:     [32mif[0m languages[[33m:functional[0m].include?(name)
    [1;34m19[0m:       new_hash[name][[33m:style[0m] << [33m:functional[0m
    [1;34m20[0m:     [32mend[0m
    [1;34m21[0m:   [32mend[0m
    [1;34m22[0m: 
    [1;34m23[0m: 
    [1;34m24[0m: 
    [1;34m25[0m: 
    [1;34m26[0m: 
 => [1;34m27[0m: binding.pry
    [1;34m28[0m:   new_hash
    [1;34m29[0m: [32mend[0m


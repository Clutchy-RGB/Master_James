ldapsearch -Q "uid=z*" cn | sed '/^cn: /!d' | cut -c5- | sort -rf

find . \( -name '*.sh' \) -print | rev | cut -f2 -d. | cut -f1 -d/ | rev

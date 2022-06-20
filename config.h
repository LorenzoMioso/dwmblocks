#define CMDLENGTH 45
#define DELIMITER " "
#define CLICKABLE_BLOCKS

const Block blocks[] = {BLOCK("bar_update_datetime", 60, 8),
                        BLOCK("bar_update_packages", 24 * 60 * 60, 10),
                        BLOCK("bar_update_battery", 60, 2),
                        BLOCK("bar_update_microphone", 0, 9),
                        BLOCK("bar_update_volume", 0, 13),
                        BLOCK("bar_update_bluetooth", 60, 3),
                        BLOCK("bar_update_capslock", 1, 5),
                        BLOCK("bar_update_wifi", 60, 15)};

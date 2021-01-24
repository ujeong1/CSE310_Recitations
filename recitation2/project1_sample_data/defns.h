#define    STATE_LEN    15
#define    MONTH_LEN    10
#define    EVENT_LEN    26
#define    COUNTY_LEN    30
#define DATE_LEN    20
#define FAT_LOC     25

struct annual_storm {
    int year; // Year of storm events
    int no_storms; // Number of storm events in the given year
    struct storm_event *storm_events;  // Pointer to array of storm events for the given year
    int no_fatalities; // Number of fatality events in the given year
    struct fatality_event *fatality_events; // Pointer to array of fatalities corresponding to storm events in the given year
};

struct storm_event {
    int event_id; // Event id
    char state[STATE_LEN]; // State name
    int year; // Four digit year of event
    char month_name[MONTH_LEN]; // Month of event
    char event_type[EVENT_LEN]; // Event type
    char cz_type; // Where event happened, C, Z, or M
    char cz_name[COUNTY_LEN]; // Name of county/zone
    int injuries_direct; // Number of direct injuries
    int injuries_indirect; // Number of indirect injuries
    int deaths_direct; // Number of direct deaths
    int deaths_indirect; // Number of indirect deaths
    int damage_property; // Amount of property damage; convert to integer
    int damage_crops; // Amount of crop damage; convert to integer
};

struct fatality_event {
    int event_id; // Identifier of the storm event
    char fatality_type; // D or I
    char fatality_date[DATE_LEN]; // Date and time of fatality
    int fatality_age; // Age of fatality
    char fatality_sex; // Gender of fatality
    char fatality_location[FAT_LOC]; // Location of fatality
};

struct damage {
    int damage_amount; // Amount of damage either to property or crops
    int year; // Year of storm
    int index; // Index position in storm_events array
};

struct deaths {
    int total_deaths; // Sum of direct and indirect deaths
    int year; // Year of storm
    int index; // Index position in storm_events array
};


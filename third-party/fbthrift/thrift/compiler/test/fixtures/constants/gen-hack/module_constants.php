<?hh
/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
class module_CONSTANTS {
  const myInt = 1337;
  const name = "Mark Zuckerberg";
  public static Vector<Map<string, int>> $states = Vector {
      Map {
        "San Diego" => 3211000,
        "Sacramento" => 479600,
        "SF" => 837400,
      },
      Map {
        "New York" => 8406000,
        "Albany" => 98400,
      },
    };
  const x = 1.0;
  const y = 1000000.0;
  const z = 1e+09;
  public static Internship $instagram = new Internship(
      12,
      "Software Engineer",
      Company::INSTAGRAM,
    );
  public static Vector<Range> $kRanges = Vector {
      new Range(
        1,
        2,
      ),
      new Range(
        5,
        6,
      ),
    };
  public static Vector<Internship> $internList = Vector {
      new Internship(
        12,
        "Software Engineer",
        Company::INSTAGRAM,
      ),
      new Internship(
        10,
        "Sales Intern",
        Company::FACEBOOK,
      ),
    };
  const apostrophe = "'";
  const tripleApostrophe = "'''";
  const quotationMark = "\"";
  const backslash = "\\";
  const escaped_a = "\x61";
  public static Map<string, int> $char2ascii = Map {
      "'" => 39,
      "\"" => 34,
      "\\" => 92,
      "\x61" => 97,
    };
  public static Vector<string> $escaped_strings = Vector {
      "\x61",
      "\xab",
      "\x6a",
      "\xa6",
      "\x61yyy",
      "\xabyyy",
      "\x6ayyy",
      "\xa6yyy",
      "zzz\x61",
      "zzz\xab",
      "zzz\x6a",
      "zzz\xa6",
      "zzz\x61yyy",
      "zzz\xabyyy",
      "zzz\x6ayyy",
      "zzz\xa6yyy",
    };
  const false_c = false;
  const true_c = true;
  const zero_byte = 0;
  const zero16 = 0;
  const zero32 = 0;
  const zero64 = 0;
  const zero_dot_zero = 0.0;
  const empty_string = "";
  public static Vector<int> $empty_int_list = Vector {
    };
  public static Vector<string> $empty_string_list = Vector {
    };
  public static Set<int> $empty_int_set = Set {
    };
  public static Set<string> $empty_string_set = Set {
    };
  public static Map<int, int> $empty_int_int_map = Map {
    };
  public static Map<int, string> $empty_int_string_map = Map {
    };
  public static Map<string, int> $empty_string_int_map = Map {
    };
  public static Map<string, string> $empty_string_string_map = Map {
    };

  public static array $__values = array(
    "myInt" => 1337,
    "name" => "Mark Zuckerberg",
    "states" => Vector {
        Map {
          "San Diego" => 3211000,
          "Sacramento" => 479600,
          "SF" => 837400,
        },
        Map {
          "New York" => 8406000,
          "Albany" => 98400,
        },
      },
    "x" => 1.0,
    "y" => 1000000.0,
    "z" => 1e+09,
    "instagram" => new Internship(
        12,
        "Software Engineer",
        Company::INSTAGRAM,
      ),
    "kRanges" => Vector {
        new Range(
          1,
          2,
        ),
        new Range(
          5,
          6,
        ),
      },
    "internList" => Vector {
        new Internship(
          12,
          "Software Engineer",
          Company::INSTAGRAM,
        ),
        new Internship(
          10,
          "Sales Intern",
          Company::FACEBOOK,
        ),
      },
    "apostrophe" => "'",
    "tripleApostrophe" => "'''",
    "quotationMark" => "\"",
    "backslash" => "\\",
    "escaped_a" => "\x61",
    "char2ascii" => Map {
        "'" => 39,
        "\"" => 34,
        "\\" => 92,
        "\x61" => 97,
      },
    "escaped_strings" => Vector {
        "\x61",
        "\xab",
        "\x6a",
        "\xa6",
        "\x61yyy",
        "\xabyyy",
        "\x6ayyy",
        "\xa6yyy",
        "zzz\x61",
        "zzz\xab",
        "zzz\x6a",
        "zzz\xa6",
        "zzz\x61yyy",
        "zzz\xabyyy",
        "zzz\x6ayyy",
        "zzz\xa6yyy",
      },
    "false_c" => false,
    "true_c" => true,
    "zero_byte" => 0,
    "zero16" => 0,
    "zero32" => 0,
    "zero64" => 0,
    "zero_dot_zero" => 0.0,
    "empty_string" => "",
    "empty_int_list" => Vector {
      },
    "empty_string_list" => Vector {
      },
    "empty_int_set" => Set {
      },
    "empty_string_set" => Set {
      },
    "empty_int_int_map" => Map {
      },
    "empty_int_string_map" => Map {
      },
    "empty_string_int_map" => Map {
      },
    "empty_string_string_map" => Map {
      },
  );
}

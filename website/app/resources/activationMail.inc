<?php
$content = "Welcome {$name},<br/>"
    . "<br/>"
    . "to complete your registration at chardev.org please follow the link below.<br/>"
    . "<br/>"
    . "<a href=\"{$url}\">{$url}</a><br/>"
    . "<br/>"
    . "The registration request will expire after 48 hours!<br/>"
    . "<br/>"
    . "This is an automated e-mail<br/>"
    . "<br/>"
    . "If you encounter problems do not hesitate to write an e-mail to <a href=\"mailto:bug@chardev.org\">bug@chardev.org</a><br/>"
    . "<br/>"
    . "Regards,<br/>"
    . "LeMartin - Martin Waßmann";

$headers = "From: registration@chardev.org\n"
    . "MIME-Version: 1.0\n"
    . "Content-Type: text/html; charset=utf-8\n"
    . "Reply-To: registration <registration@chardev.org>\n"
    . "X-mailer: chardev.org";
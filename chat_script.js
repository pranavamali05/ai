const chat = document.getElementById("chat");
const box = document.getElementById("box");
const msg = document.getElementById("msg");

function openChat() {
    chat.classList.toggle("show");
}

function addMsg(type, text) {

    box.innerHTML += `
        <div class="${type}">
            ${text}
        </div>
    `;

    box.scrollTop = box.scrollHeight;
}

function botReply(text) {

    if (text.toLowerCase().includes("hello") || text.toLowerCase().includes("hi")) {
        return "Hello! Welcome to FreshMart";
    }

    if (
        text.includes("delivery")
    ) {
        return "Delivery takes 24 hours";
    }

    if (
        text.includes("return")
    ) {
        return "Return accepted within 3 days";
    }

    if (
        text.includes("contact")
    ) {
        return "Call us on 9876543210";
    }

    if (
        text.includes("order")
    ) {
        return "Track order in My Orders";
    }

    return "Please ask about delivery, return or contact";
}

function sendMsg() {

    let text = msg.value.trim();

    if (text == "") {
        return;
    }

    addMsg("user", text);

    msg.value = "";

    setTimeout(() => {

        addMsg("bot", botReply(text.toLowerCase()));

    }, 500);
}

function quickMsg(text) {

    msg.value = text;

    sendMsg();
}

msg.addEventListener("keydown", function(event) {

    if (event.key === "Enter") {

        sendMsg();
    }

});